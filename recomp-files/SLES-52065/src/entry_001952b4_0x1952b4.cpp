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

// Function: entry_001952b4
// Address: 0x1952b4 - 0x195310
void entry_001952b4_0x1952b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001952b4_0x1952b4");
#endif

    switch (ctx->pc) {
        case 0x1952c8u: goto label_1952c8;
        case 0x1952d0u: goto label_1952d0;
        case 0x1952f8u: goto label_1952f8;
        case 0x195308u: goto label_195308;
        default: break;
    }

    ctx->pc = 0x1952b4u;

    // 0x1952b4: 0x0  nop
    ctx->pc = 0x1952b4u;
    // NOP
    // 0x1952b8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1952b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1952bc: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1952bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1952c0: 0xc06bd80  jal         func_1AF600
    ctx->pc = 0x1952C0u;
    SET_GPR_U32(ctx, 31, 0x1952C8u);
    ctx->pc = 0x1952C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952C0u;
    // 0x1952c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1952C0u, 0x1952C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952C8u;
label_1952c8:
    // 0x1952c8: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1952C8u;
    SET_GPR_U32(ctx, 31, 0x1952D0u);
    ctx->pc = 0x1952CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952C8u;
    // 0x1952cc: 0x8f9283a0  lw          $s2, -0x7C60($gp) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1952C8u, 0x1952D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952D0u;
label_1952d0:
    // 0x1952d0: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x1952d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1952d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1952d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952d8: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x1952d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1952dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1952dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1952e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1952e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1952e4: 0x0  nop
    ctx->pc = 0x1952e4u;
    // NOP
    // 0x1952e8: 0x0  nop
    ctx->pc = 0x1952e8u;
    // NOP
    // 0x1952ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1952ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1952f0: 0xc0461e4  jal         func_118790
    ctx->pc = 0x1952F0u;
    SET_GPR_U32(ctx, 31, 0x1952F8u);
    ctx->pc = 0x1952F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952F0u;
    // 0x1952f4: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118790u, 0x1952F0u, 0x1952F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952F8u;
label_1952f8:
    // 0x1952f8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1952f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1952fc: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1952fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x195300: 0xc06bd80  jal         func_1AF600
    ctx->pc = 0x195300u;
    SET_GPR_U32(ctx, 31, 0x195308u);
    ctx->pc = 0x195304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195300u;
    // 0x195304: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x195300u, 0x195308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195308u;
label_195308:
    // 0x195308: 0x10000296  b           . + 4 + (0x296 << 2)
    ctx->pc = 0x195308u;
    {
        const bool branch_taken_0x195308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195308) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195310u;
}
