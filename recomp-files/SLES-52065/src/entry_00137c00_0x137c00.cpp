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

// Function: entry_00137c00
// Address: 0x137c00 - 0x137ce0
void entry_00137c00_0x137c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137c00_0x137c00");
#endif

    switch (ctx->pc) {
        case 0x137c10u: goto label_137c10;
        case 0x137c24u: goto label_137c24;
        case 0x137c38u: goto label_137c38;
        case 0x137c4cu: goto label_137c4c;
        default: break;
    }

    ctx->pc = 0x137c00u;

    // 0x137c00: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x137c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137c04: 0x26a40028  addiu       $a0, $s5, 0x28
    ctx->pc = 0x137c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x137c08: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137C08u;
    SET_GPR_U32(ctx, 31, 0x137C10u);
    ctx->pc = 0x137C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C08u;
    // 0x137c0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137C08u, 0x137C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C10u;
label_137c10:
    // 0x137c10: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x137c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x137c14: 0x26a4002c  addiu       $a0, $s5, 0x2C
    ctx->pc = 0x137c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
    // 0x137c18: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x137c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x137c1c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137C1Cu;
    SET_GPR_U32(ctx, 31, 0x137C24u);
    ctx->pc = 0x137C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C1Cu;
    // 0x137c20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137C1Cu, 0x137C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C24u;
label_137c24:
    // 0x137c24: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x137c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x137c28: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x137c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x137c2c: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x137c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x137c30: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137C30u;
    SET_GPR_U32(ctx, 31, 0x137C38u);
    ctx->pc = 0x137C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C30u;
    // 0x137c34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137C30u, 0x137C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C38u;
label_137c38:
    // 0x137c38: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x137c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x137c3c: 0x26a40034  addiu       $a0, $s5, 0x34
    ctx->pc = 0x137c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
    // 0x137c40: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x137c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x137c44: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137C44u;
    SET_GPR_U32(ctx, 31, 0x137C4Cu);
    ctx->pc = 0x137C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C44u;
    // 0x137c48: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137C44u, 0x137C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C4Cu;
label_137c4c:
    // 0x137c4c: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x137c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x137c50: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x137c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x137c54: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x137c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x137c58: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137c5c: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x137c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x137c60: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x137c60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x137c64: 0x653018  mult        $a2, $v1, $a1
    ctx->pc = 0x137c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x137c68: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x137c68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x137c6c: 0x8ea5002c  lw          $a1, 0x2C($s5)
    ctx->pc = 0x137c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x137c70: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x137c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x137c74: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x137c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x137c78: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137c7c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x137c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x137c80: 0x70651818  mult1       $v1, $v1, $a1
    ctx->pc = 0x137c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x137c84: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x137c84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x137c88: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x137c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x137c8c: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x137c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x137c90: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x137c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x137c94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x137c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x137c98: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137c9c: 0xaea20040  sw          $v0, 0x40($s5)
    ctx->pc = 0x137c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
    // 0x137ca0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137ca4: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x137ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x137ca8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x137ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x137cac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x137cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x137cb0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x137cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x137cb4: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137cb8: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x137cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
    // 0x137cbc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x137cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x137cc0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x137cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x137cc4: 0x8ea20064  lw          $v0, 0x64($s5)
    ctx->pc = 0x137cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x137cc8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x137cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x137ccc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x137cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137cd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137CD0u;
    {
        const bool branch_taken_0x137cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CD0u;
        // 0x137cd4: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cd0) {
            ctx->pc = 0x137CE0u;
            return;
        }
    }
    ctx->pc = 0x137CD8u;
    // 0x137cd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x137cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137cdc: 0xaea20048  sw          $v0, 0x48($s5)
    ctx->pc = 0x137cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x137ce0u;
}
