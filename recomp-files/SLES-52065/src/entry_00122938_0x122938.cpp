#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00122938
// Address: 0x122938 - 0x122960
void entry_00122938_0x122938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122938_0x122938");
#endif

    switch (ctx->pc) {
        case 0x122940u: goto label_122940;
        default: break;
    }

    ctx->pc = 0x122938u;

    // 0x122938: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122938u;
    SET_GPR_U32(ctx, 31, 0x122940u);
    ctx->pc = 0x12293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122938u;
    // 0x12293c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122938u, 0x122940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122940u;
label_122940:
    // 0x122940: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x122940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x122944: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x122944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x122948: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x122948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x12294c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12294cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122958: 0x3e00008  jr          $ra
    ctx->pc = 0x122958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122958u;
        // 0x12295c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122960u;
}
