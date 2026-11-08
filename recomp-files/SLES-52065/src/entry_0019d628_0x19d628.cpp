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

// Function: entry_0019d628
// Address: 0x19d628 - 0x19d678
void entry_0019d628_0x19d628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d628_0x19d628");
#endif

    switch (ctx->pc) {
        case 0x19d638u: goto label_19d638;
        case 0x19d66cu: goto label_19d66c;
        default: break;
    }

    ctx->pc = 0x19d628u;

label_19d628:
    // 0x19d628: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19d628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d62c:
    // 0x19d62c: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x19d62cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_19d630:
    // 0x19d630: 0x320f809  jalr        $t9
label_19d634:
    if (ctx->pc == 0x19D634u) {
        ctx->pc = 0x19D638u;
        goto label_19d638;
    }
    ctx->pc = 0x19D630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D638u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D630u, 0x19D638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D638u;
label_19d638:
    // 0x19d638: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x19d638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_19d63c:
    // 0x19d63c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19d63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d640:
    // 0x19d640: 0x0  nop
    ctx->pc = 0x19d640u;
    // NOP
label_19d644:
    // 0x19d644: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19d644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d648:
    // 0x19d648: 0x0  nop
    ctx->pc = 0x19d648u;
    // NOP
label_19d64c:
    // 0x19d64c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_19d650:
    if (ctx->pc == 0x19D650u) {
        ctx->pc = 0x19D654u;
        goto label_19d654;
    }
    ctx->pc = 0x19D64Cu;
    {
        const bool branch_taken_0x19d64c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d64c) {
            ctx->pc = 0x19D6B8u;
            return;
        }
    }
    ctx->pc = 0x19D654u;
label_19d654:
    // 0x19d654: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x19d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_19d658:
    // 0x19d658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d65c:
    // 0x19d65c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d660:
    // 0x19d660: 0x8c450674  lw          $a1, 0x674($v0)
    ctx->pc = 0x19d660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
label_19d664:
    // 0x19d664: 0xc064c0c  jal         func_193030
label_19d668:
    if (ctx->pc == 0x19D668u) {
        ctx->pc = 0x19D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D664u;
        // 0x19d668: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D66Cu;
        goto label_19d66c;
    }
    ctx->pc = 0x19D664u;
    SET_GPR_U32(ctx, 31, 0x19D66Cu);
    ctx->pc = 0x19D668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D664u;
    // 0x19d668: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x19D664u, 0x19D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D66Cu;
label_19d66c:
    // 0x19d66c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d670:
    // 0x19d670: 0x10000011  b           . + 4 + (0x11 << 2)
label_19d674:
    if (ctx->pc == 0x19D674u) {
        ctx->pc = 0x19D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D670u;
        // 0x19d674: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D678u;
        goto label_fallthrough_0x19d670;
    }
    ctx->pc = 0x19D670u;
    {
        const bool branch_taken_0x19d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D670u;
        // 0x19d674: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d670) {
            ctx->pc = 0x19D6B8u;
            return;
        }
    }
label_fallthrough_0x19d670:
    ctx->pc = 0x19D678u;
}
