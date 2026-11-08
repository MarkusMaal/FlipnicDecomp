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

// Function: FUN_00122210
// Address: 0x122210 - 0x12226c
void FUN_00122210_0x122210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122210_0x122210");
#endif

    switch (ctx->pc) {
        case 0x12223cu: goto label_12223c;
        case 0x122250u: goto label_122250;
        default: break;
    }

    ctx->pc = 0x122210u;

    // 0x122210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x122214: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x122214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x122218: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x122218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12221c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12221cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x122220: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x122220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x122224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x122228: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x122228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12222c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12222cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122234: 0xc048afc  jal         func_122BF0
    ctx->pc = 0x122234u;
    SET_GPR_U32(ctx, 31, 0x12223Cu);
    ctx->pc = 0x122238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122234u;
    // 0x122238: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122BF0u, 0x122234u, 0x12223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12223Cu;
label_12223c:
    // 0x12223c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x122240: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122244: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122248: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x122248u;
    SET_GPR_U32(ctx, 31, 0x122250u);
    ctx->pc = 0x12224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122248u;
    // 0x12224c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x122248u, 0x122250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122250u;
label_122250:
    // 0x122250: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x122250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122254: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x122254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122258: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12225c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12225cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122264: 0x3e00008  jr          $ra
    ctx->pc = 0x122264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122264u;
        // 0x122268: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12226Cu;
}
