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

// Function: entry_001bda7c
// Address: 0x1bda7c - 0x1bdaf0
void entry_001bda7c_0x1bda7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bda7c_0x1bda7c");
#endif

    switch (ctx->pc) {
        case 0x1bdaa0u: goto label_1bdaa0;
        case 0x1bdab4u: goto label_1bdab4;
        case 0x1bdae8u: goto label_1bdae8;
        default: break;
    }

    ctx->pc = 0x1bda7cu;

    // 0x1bda7c: 0x0  nop
    ctx->pc = 0x1bda7cu;
    // NOP
    // 0x1bda80: 0x16000050  bnez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1BDA80u;
    {
        const bool branch_taken_0x1bda80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bda80) {
            ctx->pc = 0x1BDBC4u;
            return;
        }
    }
    ctx->pc = 0x1BDA88u;
    // 0x1bda88: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1bda88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1bda8c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1bda8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1bda90: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1BDA90u;
    {
        const bool branch_taken_0x1bda90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BDA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA90u;
        // 0x1bda94: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda90) {
            ctx->pc = 0x1BDBC4u;
            return;
        }
    }
    ctx->pc = 0x1BDA98u;
    // 0x1bda98: 0xc05023c  jal         func_1408F0
    ctx->pc = 0x1BDA98u;
    SET_GPR_U32(ctx, 31, 0x1BDAA0u);
    ctx->pc = 0x1BDA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA98u;
    // 0x1bda9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408F0u, 0x1BDA98u, 0x1BDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAA0u;
label_1bdaa0:
    // 0x1bdaa0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bdaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bdaa4: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x1bdaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1bdaa8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1bdaa8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1bdaac: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x1BDAACu;
    SET_GPR_U32(ctx, 31, 0x1BDAB4u);
    ctx->pc = 0x1BDAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDAACu;
    // 0x1bdab0: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x1BDAACu, 0x1BDAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAB4u;
label_1bdab4:
    // 0x1bdab4: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x1bdab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1bdab8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1bdab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1bdabc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bdabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bdac0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1bdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bdac4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1bdac4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bdac8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BDAC8u;
    {
        const bool branch_taken_0x1bdac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdac8) {
            ctx->pc = 0x1BDAF0u;
            return;
        }
    }
    ctx->pc = 0x1BDAD0u;
    // 0x1bdad0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bdad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bdad4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x1bdad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1bdad8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1bdad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1bdadc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1bdadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdae0: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BDAE0u;
    SET_GPR_U32(ctx, 31, 0x1BDAE8u);
    ctx->pc = 0x1BDAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDAE0u;
    // 0x1bdae4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BDAE0u, 0x1BDAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAE8u;
label_1bdae8:
    // 0x1bdae8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDAE8u;
    {
        const bool branch_taken_0x1bdae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdae8) {
            ctx->pc = 0x1BDB0Cu;
            return;
        }
    }
    ctx->pc = 0x1BDAF0u;
}
