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

// Function: entry_00145a04
// Address: 0x145a04 - 0x145a78
void entry_00145a04_0x145a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145a04_0x145a04");
#endif

    switch (ctx->pc) {
        case 0x145a28u: goto label_145a28;
        case 0x145a3cu: goto label_145a3c;
        case 0x145a70u: goto label_145a70;
        default: break;
    }

    ctx->pc = 0x145a04u;

    // 0x145a04: 0x0  nop
    ctx->pc = 0x145a04u;
    // NOP
    // 0x145a08: 0x16000050  bnez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x145A08u;
    {
        const bool branch_taken_0x145a08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x145a08) {
            ctx->pc = 0x145B4Cu;
            return;
        }
    }
    ctx->pc = 0x145A10u;
    // 0x145a10: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x145a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x145a14: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x145a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x145a18: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x145A18u;
    {
        const bool branch_taken_0x145a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x145A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A18u;
        // 0x145a1c: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a18) {
            ctx->pc = 0x145B4Cu;
            return;
        }
    }
    ctx->pc = 0x145A20u;
    // 0x145a20: 0xc05023c  jal         func_1408F0
    ctx->pc = 0x145A20u;
    SET_GPR_U32(ctx, 31, 0x145A28u);
    ctx->pc = 0x145A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A20u;
    // 0x145a24: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408F0u, 0x145A20u, 0x145A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A28u;
label_145a28:
    // 0x145a28: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x145a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x145a2c: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x145a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x145a30: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x145a30u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x145a34: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x145A34u;
    SET_GPR_U32(ctx, 31, 0x145A3Cu);
    ctx->pc = 0x145A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A34u;
    // 0x145a38: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x145A34u, 0x145A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A3Cu;
label_145a3c:
    // 0x145a3c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x145a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x145a40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x145a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x145a44: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x145a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x145a48: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x145a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x145a4c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x145a4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x145a50: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x145A50u;
    {
        const bool branch_taken_0x145a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a50) {
            ctx->pc = 0x145A78u;
            return;
        }
    }
    ctx->pc = 0x145A58u;
    // 0x145a58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x145a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x145a5c: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x145a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x145a60: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x145a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x145a64: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145a68: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x145A68u;
    SET_GPR_U32(ctx, 31, 0x145A70u);
    ctx->pc = 0x145A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A68u;
    // 0x145a6c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x145A68u, 0x145A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A70u;
label_145a70:
    // 0x145a70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145A70u;
    {
        const bool branch_taken_0x145a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a70) {
            ctx->pc = 0x145A94u;
            return;
        }
    }
    ctx->pc = 0x145A78u;
}
