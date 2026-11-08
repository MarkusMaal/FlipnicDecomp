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

// Function: entry_0018f0f8
// Address: 0x18f0f8 - 0x18f14c
void entry_0018f0f8_0x18f0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f0f8_0x18f0f8");
#endif

    switch (ctx->pc) {
        case 0x18f100u: goto label_18f100;
        case 0x18f10cu: goto label_18f10c;
        case 0x18f11cu: goto label_18f11c;
        case 0x18f130u: goto label_18f130;
        default: break;
    }

    ctx->pc = 0x18f0f8u;

label_18f0f8:
    // 0x18f0f8: 0xc062e70  jal         func_18B9C0
label_18f0fc:
    if (ctx->pc == 0x18F0FCu) {
        ctx->pc = 0x18F100u;
        goto label_18f100;
    }
    ctx->pc = 0x18F0F8u;
    SET_GPR_U32(ctx, 31, 0x18F100u);
    ctx->pc = 0x18B9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B9C0u, 0x18F0F8u, 0x18F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F100u;
label_18f100:
    // 0x18f100: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x18f100u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f104:
    // 0x18f104: 0xc062e88  jal         func_18BA20
label_18f108:
    if (ctx->pc == 0x18F108u) {
        ctx->pc = 0x18F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F104u;
        // 0x18f108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F10Cu;
        goto label_18f10c;
    }
    ctx->pc = 0x18F104u;
    SET_GPR_U32(ctx, 31, 0x18F10Cu);
    ctx->pc = 0x18F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F104u;
    // 0x18f108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BA20u, 0x18F104u, 0x18F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F10Cu;
label_18f10c:
    // 0x18f10c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x18f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_18f110:
    // 0x18f110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18f110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f114:
    // 0x18f114: 0xc04c6dc  jal         func_131B70
label_18f118:
    if (ctx->pc == 0x18F118u) {
        ctx->pc = 0x18F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F114u;
        // 0x18f118: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F11Cu;
        goto label_18f11c;
    }
    ctx->pc = 0x18F114u;
    SET_GPR_U32(ctx, 31, 0x18F11Cu);
    ctx->pc = 0x18F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F114u;
    // 0x18f118: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x18F114u, 0x18F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F11Cu;
label_18f11c:
    // 0x18f11c: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x18f11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_18f120:
    // 0x18f120: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f124:
    // 0x18f124: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x18f124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_18f128:
    // 0x18f128: 0x320f809  jalr        $t9
label_18f12c:
    if (ctx->pc == 0x18F12Cu) {
        ctx->pc = 0x18F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F128u;
        // 0x18f12c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F130u;
        goto label_18f130;
    }
    ctx->pc = 0x18F128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F130u);
        ctx->pc = 0x18F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F128u;
        // 0x18f12c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F128u, 0x18F130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F130u;
label_18f130:
    // 0x18f130: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18f130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_18f134:
    // 0x18f134: 0x2a2001a  div         $zero, $s5, $v0
    ctx->pc = 0x18f134u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_18f138:
    // 0x18f138: 0x0  nop
    ctx->pc = 0x18f138u;
    // NOP
label_18f13c:
    // 0x18f13c: 0x0  nop
    ctx->pc = 0x18f13cu;
    // NOP
label_18f140:
    // 0x18f140: 0x8812  mflo        $s1
    ctx->pc = 0x18f140u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_18f144:
    // 0x18f144: 0x10000043  b           . + 4 + (0x43 << 2)
label_18f148:
    if (ctx->pc == 0x18F148u) {
        ctx->pc = 0x18F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F144u;
        // 0x18f148: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F14Cu;
        goto label_fallthrough_0x18f144;
    }
    ctx->pc = 0x18F144u;
    {
        const bool branch_taken_0x18f144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F144u;
        // 0x18f148: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f144) {
            ctx->pc = 0x18F254u;
            return;
        }
    }
label_fallthrough_0x18f144:
    ctx->pc = 0x18F14Cu;
}
