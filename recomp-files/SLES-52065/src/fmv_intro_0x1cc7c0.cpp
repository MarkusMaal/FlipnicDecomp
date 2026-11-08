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

// Function: fmv_intro
// Address: 0x1cc7c0 - 0x1cc81c
void fmv_intro_0x1cc7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fmv_intro_0x1cc7c0");
#endif

    switch (ctx->pc) {
        case 0x1cc7d0u: goto label_1cc7d0;
        case 0x1cc7e8u: goto label_1cc7e8;
        case 0x1cc810u: goto label_1cc810;
        default: break;
    }

    ctx->pc = 0x1cc7c0u;

    // 0x1cc7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc7c8: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1CC7C8u;
    SET_GPR_U32(ctx, 31, 0x1CC7D0u);
    ctx->pc = 0x1CC7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC7C8u;
    // 0x1cc7cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1CC7C8u, 0x1CC7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7D0u;
label_1cc7d0:
    // 0x1cc7d0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1cc7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1cc7d4: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x1cc7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1cc7d8: 0x246380e0  addiu       $v1, $v1, -0x7F20
    ctx->pc = 0x1cc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934752));
    // 0x1cc7dc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cc7dcu;
    { uint32_t bits = FAST_READ32(0x2180E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc7e0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1CC7E0u;
    SET_GPR_U32(ctx, 31, 0x1CC7E8u);
    ctx->pc = 0x1CC7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC7E0u;
    // 0x1cc7e4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1CC7E0u, 0x1CC7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7E8u;
label_1cc7e8:
    // 0x1cc7e8: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x1cc7e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1cc7ec: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cc7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cc7f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cc7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cc7f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cc7f8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cc7f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cc7fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc800: 0x0  nop
    ctx->pc = 0x1cc800u;
    // NOP
    // 0x1cc804: 0x1010  mfhi        $v0
    ctx->pc = 0x1cc804u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1cc808: 0xc060020  jal         func_180080
    ctx->pc = 0x1CC808u;
    SET_GPR_U32(ctx, 31, 0x1CC810u);
    ctx->pc = 0x1CC80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC808u;
    // 0x1cc80c: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180080u, 0x1CC808u, 0x1CC810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC810u;
label_1cc810:
    // 0x1cc810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc814: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC814u;
        // 0x1cc818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC81Cu;
}
