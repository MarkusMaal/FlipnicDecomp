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

// Function: entry_0016900c
// Address: 0x16900c - 0x169058
void entry_0016900c_0x16900c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016900c_0x16900c");
#endif

    switch (ctx->pc) {
        case 0x16902cu: goto label_16902c;
        default: break;
    }

    ctx->pc = 0x16900cu;

label_16900c:
    // 0x16900c: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x16900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_169010:
    // 0x169010: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x169010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_169014:
    // 0x169014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169018:
    // 0x169018: 0xc60c0240  lwc1        $f12, 0x240($s0)
    ctx->pc = 0x169018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16901c:
    // 0x16901c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_169020:
    // 0x169020: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x169020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_169024:
    // 0x169024: 0xc046724  jal         func_119C90
label_169028:
    if (ctx->pc == 0x169028u) {
        ctx->pc = 0x169028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169024u;
        // 0x169028: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16902Cu;
        goto label_16902c;
    }
    ctx->pc = 0x169024u;
    SET_GPR_U32(ctx, 31, 0x16902Cu);
    ctx->pc = 0x169028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169024u;
    // 0x169028: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119C90u, 0x169024u, 0x16902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16902Cu;
label_16902c:
    // 0x16902c: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x16902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_169030:
    // 0x169030: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_169034:
    if (ctx->pc == 0x169034u) {
        ctx->pc = 0x169038u;
        goto label_169038;
    }
    ctx->pc = 0x169030u;
    {
        const bool branch_taken_0x169030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169030) {
            ctx->pc = 0x169058u;
            return;
        }
    }
    ctx->pc = 0x169038u;
label_169038:
    // 0x169038: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x169038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_16903c:
    // 0x16903c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169040:
    // 0x169040: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_169044:
    if (ctx->pc == 0x169044u) {
        ctx->pc = 0x169048u;
        goto label_169048;
    }
    ctx->pc = 0x169040u;
    {
        const bool branch_taken_0x169040 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169040) {
            ctx->pc = 0x169058u;
            return;
        }
    }
    ctx->pc = 0x169048u;
label_169048:
    // 0x169048: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16904c:
    // 0x16904c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x16904cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_169050:
    // 0x169050: 0x320f809  jalr        $t9
label_169054:
    if (ctx->pc == 0x169054u) {
        ctx->pc = 0x169054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169050u;
        // 0x169054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169058u;
        goto label_fallthrough_0x169050;
    }
    ctx->pc = 0x169050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169058u);
        ctx->pc = 0x169054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169050u;
        // 0x169054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169050u, 0x169058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x169050:
    ctx->pc = 0x169058u;
}
