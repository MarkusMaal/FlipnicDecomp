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

// Function: entry_0019ce8c
// Address: 0x19ce8c - 0x19cf18
void entry_0019ce8c_0x19ce8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ce8c_0x19ce8c");
#endif

    switch (ctx->pc) {
        case 0x19ce98u: goto label_19ce98;
        case 0x19ceb8u: goto label_19ceb8;
        case 0x19cec0u: goto label_19cec0;
        case 0x19cef8u: goto label_19cef8;
        case 0x19cf0cu: goto label_19cf0c;
        default: break;
    }

    ctx->pc = 0x19ce8cu;

label_19ce8c:
    // 0x19ce8c: 0x0  nop
    ctx->pc = 0x19ce8cu;
    // NOP
label_19ce90:
    // 0x19ce90: 0xc064bf8  jal         func_192FE0
label_19ce94:
    if (ctx->pc == 0x19CE94u) {
        ctx->pc = 0x19CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE90u;
        // 0x19ce94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE98u;
        goto label_19ce98;
    }
    ctx->pc = 0x19CE90u;
    SET_GPR_U32(ctx, 31, 0x19CE98u);
    ctx->pc = 0x19CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CE90u;
    // 0x19ce94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192FE0u, 0x19CE90u, 0x19CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE98u;
label_19ce98:
    // 0x19ce98: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x19ce98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ce9c:
    // 0x19ce9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cea0:
    // 0x19cea0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19cea4:
    // 0x19cea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19cea8:
    // 0x19cea8: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x19cea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_19ceac:
    // 0x19ceac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ceacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ceb0:
    // 0x19ceb0: 0x320f809  jalr        $t9
label_19ceb4:
    if (ctx->pc == 0x19CEB4u) {
        ctx->pc = 0x19CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEB0u;
        // 0x19ceb4: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEB8u;
        goto label_19ceb8;
    }
    ctx->pc = 0x19CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CEB8u);
        ctx->pc = 0x19CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEB0u;
        // 0x19ceb4: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CEB0u, 0x19CEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CEB8u;
label_19ceb8:
    // 0x19ceb8: 0xc0802aa  jal         func_200AA8
label_19cebc:
    if (ctx->pc == 0x19CEBCu) {
        ctx->pc = 0x19CEC0u;
        goto label_19cec0;
    }
    ctx->pc = 0x19CEB8u;
    SET_GPR_U32(ctx, 31, 0x19CEC0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x19CEB8u, 0x19CEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEC0u;
label_19cec0:
    // 0x19cec0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19cec4:
    // 0x19cec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19cec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19cec8:
    // 0x19cec8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19cec8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19cecc:
    // 0x19cecc: 0x0  nop
    ctx->pc = 0x19ceccu;
    // NOP
label_19ced0:
    // 0x19ced0: 0x0  nop
    ctx->pc = 0x19ced0u;
    // NOP
label_19ced4:
    // 0x19ced4: 0x1010  mfhi        $v0
    ctx->pc = 0x19ced4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19ced8:
    // 0x19ced8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x19ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_19cedc:
    // 0x19cedc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x19cedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_19cee0:
    // 0x19cee0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_19cee4:
    // 0x19cee4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cee8:
    // 0x19cee8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x19cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_19ceec:
    // 0x19ceec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x19ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_19cef0:
    // 0x19cef0: 0xc064c4c  jal         func_193130
label_19cef4:
    if (ctx->pc == 0x19CEF4u) {
        ctx->pc = 0x19CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEF0u;
        // 0x19cef4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEF8u;
        goto label_19cef8;
    }
    ctx->pc = 0x19CEF0u;
    SET_GPR_U32(ctx, 31, 0x19CEF8u);
    ctx->pc = 0x19CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CEF0u;
    // 0x19cef4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19CEF0u, 0x19CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEF8u;
label_19cef8:
    // 0x19cef8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x19cef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cefc:
    // 0x19cefc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19cf00:
    // 0x19cf00: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x19cf00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19cf04:
    // 0x19cf04: 0x320f809  jalr        $t9
label_19cf08:
    if (ctx->pc == 0x19CF08u) {
        ctx->pc = 0x19CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF04u;
        // 0x19cf08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF0Cu;
        goto label_19cf0c;
    }
    ctx->pc = 0x19CF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CF0Cu);
        ctx->pc = 0x19CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF04u;
        // 0x19cf08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CF04u, 0x19CF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CF0Cu;
label_19cf0c:
    // 0x19cf0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19cf10:
    // 0x19cf10: 0x1000005f  b           . + 4 + (0x5F << 2)
label_19cf14:
    if (ctx->pc == 0x19CF14u) {
        ctx->pc = 0x19CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF10u;
        // 0x19cf14: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF18u;
        goto label_fallthrough_0x19cf10;
    }
    ctx->pc = 0x19CF10u;
    {
        const bool branch_taken_0x19cf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF10u;
        // 0x19cf14: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf10) {
            ctx->pc = 0x19D090u;
            return;
        }
    }
label_fallthrough_0x19cf10:
    ctx->pc = 0x19CF18u;
}
