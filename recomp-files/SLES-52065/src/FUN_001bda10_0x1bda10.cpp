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

// Function: FUN_001bda10
// Address: 0x1bda10 - 0x1bdc60
void FUN_001bda10_0x1bda10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bda10_0x1bda10");
#endif

    switch (ctx->pc) {
        case 0x1bda48u: goto label_1bda48;
        case 0x1bda54u: goto label_1bda54;
        case 0x1bda74u: goto label_1bda74;
        case 0x1bda7cu: goto label_1bda7c;
        case 0x1bdaa0u: goto label_1bdaa0;
        case 0x1bdab4u: goto label_1bdab4;
        case 0x1bdae8u: goto label_1bdae8;
        case 0x1bdb0cu: goto label_1bdb0c;
        case 0x1bdb48u: goto label_1bdb48;
        case 0x1bdb54u: goto label_1bdb54;
        case 0x1bdb8cu: goto label_1bdb8c;
        case 0x1bdb98u: goto label_1bdb98;
        case 0x1bdbc4u: goto label_1bdbc4;
        case 0x1bdc10u: goto label_1bdc10;
        default: break;
    }

    ctx->pc = 0x1bda10u;

    // 0x1bda10: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1bda10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1bda14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bda14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1bda18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bda18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bda1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bda20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bda20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bda24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bda28: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1bda28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bda2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bda30: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1bda30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bda34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bda38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bda38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bda3c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1bda3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bda40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda44: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x1bda44u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1bda48:
    // 0x1bda48: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1bda48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1bda4c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BDA4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA54u);
    ctx->pc = 0x1BDA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA4Cu;
    // 0x1bda50: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BDA4Cu, 0x1BDA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA54u;
label_1bda54:
    // 0x1bda54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bda54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda58: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDA58u;
    {
        const bool branch_taken_0x1bda58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA58u;
        // 0x1bda5c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda58) {
            ctx->pc = 0x1BDA7Cu;
            goto label_1bda7c;
        }
    }
    ctx->pc = 0x1BDA60u;
    // 0x1bda60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bda60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bda64: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bda64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1bda68: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bda68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bda6c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BDA6Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA74u);
    ctx->pc = 0x1BDA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA6Cu;
    // 0x1bda70: 0x24a51250  addiu       $a1, $a1, 0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BDA6Cu, 0x1BDA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA74u;
label_1bda74:
    // 0x1bda74: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BDA74u;
    SET_GPR_U32(ctx, 31, 0x1BDA7Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BDA74u, 0x1BDA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA7Cu;
label_1bda7c:
    // 0x1bda7c: 0x0  nop
    ctx->pc = 0x1bda7cu;
    // NOP
    // 0x1bda80: 0x16000050  bnez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1BDA80u;
    {
        const bool branch_taken_0x1bda80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bda80) {
            ctx->pc = 0x1BDBC4u;
            goto label_1bdbc4;
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
            goto label_1bdbc4;
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
            goto label_1bdaf0;
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
            goto label_1bdb0c;
        }
    }
    ctx->pc = 0x1BDAF0u;
label_1bdaf0:
    // 0x1bdaf0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bdaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdaf4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bdaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bdaf8: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x1bdaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1bdafc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1bdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1bdb00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1bdb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb04: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BDB04u;
    SET_GPR_U32(ctx, 31, 0x1BDB0Cu);
    ctx->pc = 0x1BDB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB04u;
    // 0x1bdb08: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BDB04u, 0x1BDB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB0Cu;
label_1bdb0c:
    // 0x1bdb0c: 0x0  nop
    ctx->pc = 0x1bdb0cu;
    // NOP
    // 0x1bdb10: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x1bdb10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1bdb14: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x1bdb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1bdb18: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x1bdb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1bdb1c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1bdb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1bdb20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1bdb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bdb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb28: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x1bdb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x1bdb2c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x1bdb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x1bdb30: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1bdb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1bdb34: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1bdb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1bdb38: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1bdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1bdb3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdb40: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BDB40u;
    SET_GPR_U32(ctx, 31, 0x1BDB48u);
    ctx->pc = 0x1BDB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB40u;
    // 0x1bdb44: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BDB40u, 0x1BDB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB48u;
label_1bdb48:
    // 0x1bdb48: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1bdb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1bdb4c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDB54u);
    ctx->pc = 0x1BDB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB4Cu;
    // 0x1bdb50: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDB4Cu, 0x1BDB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB54u;
label_1bdb54:
    // 0x1bdb54: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1bdb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1bdb58: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x1bdb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1bdb5c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1bdb5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bdb60: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1bdb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdb64: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x1bdb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1bdb68: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x1bdb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1bdb6c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1bdb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1bdb70: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1bdb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bdb74: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1bdb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1bdb78: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1bdb78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdb7c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1bdb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdb80: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1bdb80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1bdb84: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDB84u;
    SET_GPR_U32(ctx, 31, 0x1BDB8Cu);
    ctx->pc = 0x1BDB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB84u;
    // 0x1bdb88: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDB84u, 0x1BDB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB8Cu;
label_1bdb8c:
    // 0x1bdb8c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bdb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bdb90: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDB90u;
    SET_GPR_U32(ctx, 31, 0x1BDB98u);
    ctx->pc = 0x1BDB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB90u;
    // 0x1bdb94: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDB90u, 0x1BDB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB98u;
label_1bdb98:
    // 0x1bdb98: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1bdb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bdb9c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1bdb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bdba0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bdba0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdba4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1bdba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bdba8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1bdba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bdbac: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1bdbacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1bdbb0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1bdbb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdbb4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1bdbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1bdbb8: 0x83a7011c  lb          $a3, 0x11C($sp)
    ctx->pc = 0x1bdbb8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1bdbbc: 0xc06f838  jal         func_1BE0E0
    ctx->pc = 0x1BDBBCu;
    SET_GPR_U32(ctx, 31, 0x1BDBC4u);
    ctx->pc = 0x1BDBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDBBCu;
    // 0x1bdbc0: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BDBBCu, 0x1BDBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBC4u;
label_1bdbc4:
    // 0x1bdbc4: 0x0  nop
    ctx->pc = 0x1bdbc4u;
    // NOP
    // 0x1bdbc8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1bdbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1bdbcc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1bdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1bdbd0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1bdbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1bdbd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bdbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bdbd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdbdc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1bdbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bdbe0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDBE0u;
    {
        const bool branch_taken_0x1bdbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdbe0) {
            ctx->pc = 0x1BDBECu;
            goto label_1bdbec;
        }
    }
    ctx->pc = 0x1BDBE8u;
    // 0x1bdbe8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bdbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bdbec:
    // 0x1bdbec: 0x0  nop
    ctx->pc = 0x1bdbecu;
    // NOP
    // 0x1bdbf0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1bdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1bdbf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdbf8: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x1bdbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1bdbfc: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x1bdbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1bdc00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bdc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdc04: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1bdc04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1bdc08: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x1BDC08u;
    SET_GPR_U32(ctx, 31, 0x1BDC10u);
    ctx->pc = 0x1BDC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC08u;
    // 0x1bdc0c: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x1BDC08u, 0x1BDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC10u;
label_1bdc10:
    // 0x1bdc10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1bdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bdc14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bdc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bdc18: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1bdc18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1bdc1c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1bdc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1bdc20: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1bdc20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1bdc24: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDC24u;
    {
        const bool branch_taken_0x1bdc24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc24) {
            ctx->pc = 0x1BDC34u;
            goto label_1bdc34;
        }
    }
    ctx->pc = 0x1BDC2Cu;
    // 0x1bdc2c: 0x1000ff86  b           . + 4 + (-0x7A << 2)
    ctx->pc = 0x1BDC2Cu;
    {
        const bool branch_taken_0x1bdc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC2Cu;
        // 0x1bdc30: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc2c) {
            ctx->pc = 0x1BDA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bda48;
        }
    }
    ctx->pc = 0x1BDC34u;
label_1bdc34:
    // 0x1bdc34: 0x0  nop
    ctx->pc = 0x1bdc34u;
    // NOP
    // 0x1bdc38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bdc38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc3c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bdc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bdc40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bdc40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bdc44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bdc44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bdc48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bdc48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bdc4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bdc4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdc50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bdc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdc54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bdc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdc58: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC58u;
        // 0x1bdc5c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDC60u;
}
