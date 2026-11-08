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

// Function: entry_001bdf64
// Address: 0x1bdf64 - 0x1bdfd8
void entry_001bdf64_0x1bdf64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdf64_0x1bdf64");
#endif

    switch (ctx->pc) {
        case 0x1bdf88u: goto label_1bdf88;
        case 0x1bdf94u: goto label_1bdf94;
        case 0x1bdfa0u: goto label_1bdfa0;
        case 0x1bdfacu: goto label_1bdfac;
        case 0x1bdfb8u: goto label_1bdfb8;
        default: break;
    }

    ctx->pc = 0x1bdf64u;

    // 0x1bdf64: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdf68: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1bdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1bdf6c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x1bdf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1bdf70: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x1bdf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1bdf74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bdf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf78: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1bdf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1bdf7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdf80: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BDF80u;
    SET_GPR_U32(ctx, 31, 0x1BDF88u);
    ctx->pc = 0x1BDF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF80u;
    // 0x1bdf84: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BDF80u, 0x1BDF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF88u;
label_1bdf88:
    // 0x1bdf88: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bdf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bdf8c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDF8Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF94u);
    ctx->pc = 0x1BDF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF8Cu;
    // 0x1bdf90: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDF8Cu, 0x1BDF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF94u;
label_1bdf94:
    // 0x1bdf94: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bdf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bdf98: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDF98u;
    SET_GPR_U32(ctx, 31, 0x1BDFA0u);
    ctx->pc = 0x1BDF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF98u;
    // 0x1bdf9c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDF98u, 0x1BDFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFA0u;
label_1bdfa0:
    // 0x1bdfa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfa4: 0xc050184  jal         func_140610
    ctx->pc = 0x1BDFA4u;
    SET_GPR_U32(ctx, 31, 0x1BDFACu);
    ctx->pc = 0x1BDFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFA4u;
    // 0x1bdfa8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x1BDFA4u, 0x1BDFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFACu;
label_1bdfac:
    // 0x1bdfac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1bdfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bdfb0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDFB0u;
    SET_GPR_U32(ctx, 31, 0x1BDFB8u);
    ctx->pc = 0x1BDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFB0u;
    // 0x1bdfb4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDFB0u, 0x1BDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFB8u;
label_1bdfb8:
    // 0x1bdfb8: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1bdfbc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1bdfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1bdfc0: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x1bdfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bdfc4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1bdfc8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1bdfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bdfcc: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1bdfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1bdfd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDFD0u;
    {
        const bool branch_taken_0x1bdfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFD0u;
        // 0x1bdfd4: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfd0) {
            ctx->pc = 0x1BDFDCu;
            return;
        }
    }
    ctx->pc = 0x1BDFD8u;
}
