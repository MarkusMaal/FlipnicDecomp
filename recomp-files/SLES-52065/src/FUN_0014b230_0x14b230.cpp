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

// Function: FUN_0014b230
// Address: 0x14b230 - 0x14b480
void FUN_0014b230_0x14b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014b230_0x14b230");
#endif

    switch (ctx->pc) {
        case 0x14b268u: goto label_14b268;
        case 0x14b274u: goto label_14b274;
        case 0x14b294u: goto label_14b294;
        case 0x14b29cu: goto label_14b29c;
        case 0x14b2c0u: goto label_14b2c0;
        case 0x14b2d4u: goto label_14b2d4;
        case 0x14b308u: goto label_14b308;
        case 0x14b32cu: goto label_14b32c;
        case 0x14b368u: goto label_14b368;
        case 0x14b374u: goto label_14b374;
        case 0x14b3acu: goto label_14b3ac;
        case 0x14b3b8u: goto label_14b3b8;
        case 0x14b3e4u: goto label_14b3e4;
        case 0x14b430u: goto label_14b430;
        default: break;
    }

    ctx->pc = 0x14b230u;

    // 0x14b230: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x14b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x14b234: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14b238: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14b238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14b23c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14b23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14b240: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14b240u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b244: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14b244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14b248: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14b248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b24c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b250: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x14b250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b254: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b25c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x14b25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b260: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14b260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b264: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x14b264u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_14b268:
    // 0x14b268: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14b26c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14B26Cu;
    SET_GPR_U32(ctx, 31, 0x14B274u);
    ctx->pc = 0x14B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B26Cu;
    // 0x14b270: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14B26Cu, 0x14B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B274u;
label_14b274:
    // 0x14b274: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14b274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b278: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B278u;
    {
        const bool branch_taken_0x14b278 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B278u;
        // 0x14b27c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b278) {
            ctx->pc = 0x14B29Cu;
            goto label_14b29c;
        }
    }
    ctx->pc = 0x14B280u;
    // 0x14b280: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14b280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14b284: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14b284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14b288: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14b288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14b28c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14B28Cu;
    SET_GPR_U32(ctx, 31, 0x14B294u);
    ctx->pc = 0x14B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B28Cu;
    // 0x14b290: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14B28Cu, 0x14B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B294u;
label_14b294:
    // 0x14b294: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14B294u;
    SET_GPR_U32(ctx, 31, 0x14B29Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14B294u, 0x14B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B29Cu;
label_14b29c:
    // 0x14b29c: 0x0  nop
    ctx->pc = 0x14b29cu;
    // NOP
    // 0x14b2a0: 0x16000050  bnez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x14B2A0u;
    {
        const bool branch_taken_0x14b2a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b2a0) {
            ctx->pc = 0x14B3E4u;
            goto label_14b3e4;
        }
    }
    ctx->pc = 0x14B2A8u;
    // 0x14b2a8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14b2ac: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14b2b0: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x14B2B0u;
    {
        const bool branch_taken_0x14b2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2B0u;
        // 0x14b2b4: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2b0) {
            ctx->pc = 0x14B3E4u;
            goto label_14b3e4;
        }
    }
    ctx->pc = 0x14B2B8u;
    // 0x14b2b8: 0xc05023c  jal         func_1408F0
    ctx->pc = 0x14B2B8u;
    SET_GPR_U32(ctx, 31, 0x14B2C0u);
    ctx->pc = 0x14B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2B8u;
    // 0x14b2bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408F0u, 0x14B2B8u, 0x14B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2C0u;
label_14b2c0:
    // 0x14b2c0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x14b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b2c4: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x14b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x14b2c8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x14b2c8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x14b2cc: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x14B2CCu;
    SET_GPR_U32(ctx, 31, 0x14B2D4u);
    ctx->pc = 0x14B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2CCu;
    // 0x14b2d0: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x14B2CCu, 0x14B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2D4u;
label_14b2d4:
    // 0x14b2d4: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x14b2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14b2d8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x14b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14b2dc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x14b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b2e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14b2e4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x14b2e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14b2e8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B2E8u;
    {
        const bool branch_taken_0x14b2e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b2e8) {
            ctx->pc = 0x14B310u;
            goto label_14b310;
        }
    }
    ctx->pc = 0x14B2F0u;
    // 0x14b2f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14b2f4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x14b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x14b2f8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x14b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b2fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b300: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B300u;
    SET_GPR_U32(ctx, 31, 0x14B308u);
    ctx->pc = 0x14B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B300u;
    // 0x14b304: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B300u, 0x14B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B308u;
label_14b308:
    // 0x14b308: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B308u;
    {
        const bool branch_taken_0x14b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b308) {
            ctx->pc = 0x14B32Cu;
            goto label_14b32c;
        }
    }
    ctx->pc = 0x14B310u;
label_14b310:
    // 0x14b310: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x14b310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b314: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14b314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14b318: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x14b318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x14b31c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x14b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b320: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b324: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B324u;
    SET_GPR_U32(ctx, 31, 0x14B32Cu);
    ctx->pc = 0x14B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B324u;
    // 0x14b328: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B324u, 0x14B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B32Cu;
label_14b32c:
    // 0x14b32c: 0x0  nop
    ctx->pc = 0x14b32cu;
    // NOP
    // 0x14b330: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x14b330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x14b334: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x14b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x14b338: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x14b338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x14b33c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x14b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14b340: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b348: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x14b348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x14b34c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x14b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x14b350: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x14b350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x14b354: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14b354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14b358: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x14b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b35c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b360: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B360u;
    SET_GPR_U32(ctx, 31, 0x14B368u);
    ctx->pc = 0x14B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B360u;
    // 0x14b364: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B360u, 0x14B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B368u;
label_14b368:
    // 0x14b368: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x14b368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14b36c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B36Cu;
    SET_GPR_U32(ctx, 31, 0x14B374u);
    ctx->pc = 0x14B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B36Cu;
    // 0x14b370: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B36Cu, 0x14B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B374u;
label_14b374:
    // 0x14b374: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x14b374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14b378: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x14b378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x14b37c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x14b37cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b380: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x14b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b384: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x14b384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x14b388: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x14b388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x14b38c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x14b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x14b390: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x14b390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14b394: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x14b394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x14b398: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x14b398u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b39c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14b39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b3a0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x14b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x14b3a4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B3A4u;
    SET_GPR_U32(ctx, 31, 0x14B3ACu);
    ctx->pc = 0x14B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3A4u;
    // 0x14b3a8: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B3A4u, 0x14B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3ACu;
label_14b3ac:
    // 0x14b3ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14b3b0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B3B0u;
    SET_GPR_U32(ctx, 31, 0x14B3B8u);
    ctx->pc = 0x14B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3B0u;
    // 0x14b3b4: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B3B0u, 0x14B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3B8u;
label_14b3b8:
    // 0x14b3b8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x14b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14b3bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x14b3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14b3c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14b3c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b3c4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x14b3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14b3c8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x14b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14b3cc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14b3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x14b3d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14b3d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b3d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14b3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14b3d8: 0x83a7011c  lb          $a3, 0x11C($sp)
    ctx->pc = 0x14b3d8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x14b3dc: 0xc052e54  jal         func_14B950
    ctx->pc = 0x14B3DCu;
    SET_GPR_U32(ctx, 31, 0x14B3E4u);
    ctx->pc = 0x14B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3DCu;
    // 0x14b3e0: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B950u, 0x14B3DCu, 0x14B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3E4u;
label_14b3e4:
    // 0x14b3e4: 0x0  nop
    ctx->pc = 0x14b3e4u;
    // NOP
    // 0x14b3e8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14b3ec: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x14b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x14b3f0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14b3f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14b3f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b3fc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x14b3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14b400: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B400u;
    {
        const bool branch_taken_0x14b400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b400) {
            ctx->pc = 0x14B40Cu;
            goto label_14b40c;
        }
    }
    ctx->pc = 0x14B408u;
    // 0x14b408: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14b408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14b40c:
    // 0x14b40c: 0x0  nop
    ctx->pc = 0x14b40cu;
    // NOP
    // 0x14b410: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x14b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14b414: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b418: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x14b418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x14b41c: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x14b41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x14b420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b424: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x14b424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x14b428: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x14B428u;
    SET_GPR_U32(ctx, 31, 0x14B430u);
    ctx->pc = 0x14B42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B428u;
    // 0x14b42c: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x14B428u, 0x14B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B430u;
label_14b430:
    // 0x14b430: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14b434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b438: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x14b438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x14b43c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14b440: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x14b440u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14b444: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B444u;
    {
        const bool branch_taken_0x14b444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b444) {
            ctx->pc = 0x14B454u;
            goto label_14b454;
        }
    }
    ctx->pc = 0x14B44Cu;
    // 0x14b44c: 0x1000ff86  b           . + 4 + (-0x7A << 2)
    ctx->pc = 0x14B44Cu;
    {
        const bool branch_taken_0x14b44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B44Cu;
        // 0x14b450: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b44c) {
            ctx->pc = 0x14B268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b268;
        }
    }
    ctx->pc = 0x14B454u;
label_14b454:
    // 0x14b454: 0x0  nop
    ctx->pc = 0x14b454u;
    // NOP
    // 0x14b458: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14b458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b45c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14b45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b460: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14b460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b464: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14b464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b468: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14b468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b46c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b478: 0x3e00008  jr          $ra
    ctx->pc = 0x14B478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B478u;
        // 0x14b47c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B480u;
}
