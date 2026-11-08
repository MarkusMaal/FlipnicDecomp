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

// Function: entry_001eab14
// Address: 0x1eab14 - 0x1eab44
void entry_001eab14_0x1eab14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eab14_0x1eab14");
#endif

    ctx->pc = 0x1eab14u;

    // 0x1eab14: 0x0  nop
    ctx->pc = 0x1eab14u;
    // NOP
    // 0x1eab18: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eab1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eab20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1eab20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1eab24: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1eab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1eab28: 0x1043fff3  beq         $v0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1EAB28u;
    {
        const bool branch_taken_0x1eab28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1eab28) {
            ctx->pc = 0x1EAAF8u;
            return;
        }
    }
    ctx->pc = 0x1EAB30u;
    // 0x1eab30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eab30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eab34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eab34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eab38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eab38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eab3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB3Cu;
        // 0x1eab40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAB44u;
}
