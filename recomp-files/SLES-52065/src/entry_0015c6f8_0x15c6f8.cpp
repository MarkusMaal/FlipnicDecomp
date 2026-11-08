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

// Function: entry_0015c6f8
// Address: 0x15c6f8 - 0x15c71c
void entry_0015c6f8_0x15c6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c6f8_0x15c6f8");
#endif

    ctx->pc = 0x15c6f8u;

    // 0x15c6f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15c6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15c6fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x15c6fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15c700: 0x883021  addu        $a2, $a0, $t0
    ctx->pc = 0x15c700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x15c704: 0x28e3000a  slti        $v1, $a3, 0xA
    ctx->pc = 0x15c704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15c708: 0x250803d0  addiu       $t0, $t0, 0x3D0
    ctx->pc = 0x15c708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 976));
    // 0x15c70c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15C70Cu;
    {
        const bool branch_taken_0x15c70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C70Cu;
        // 0x15c710: 0xe4c00210  swc1        $f0, 0x210($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 528), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c70c) {
            ctx->pc = 0x15C6C0u;
            return;
        }
    }
    ctx->pc = 0x15C714u;
    // 0x15c714: 0x3e00008  jr          $ra
    ctx->pc = 0x15C714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C71Cu;
}
