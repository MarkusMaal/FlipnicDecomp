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

// Function: FUN_00141f40
// Address: 0x141f40 - 0x14213c
void FUN_00141f40_0x141f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00141f40_0x141f40");
#endif

    switch (ctx->pc) {
        case 0x141f7cu: goto label_141f7c;
        case 0x141f90u: goto label_141f90;
        case 0x142014u: goto label_142014;
        case 0x142024u: goto label_142024;
        default: break;
    }

    ctx->pc = 0x141f40u;

    // 0x141f40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x141f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x141f44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x141f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x141f48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x141f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x141f4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x141f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x141f50: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x141f50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x141f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x141f58: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x141f58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x141f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x141f60: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x141f60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x141f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141f68: 0x26c4002c  addiu       $a0, $s6, 0x2C
    ctx->pc = 0x141f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 44));
    // 0x141f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141f70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x141f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f74: 0xc050d38  jal         func_1434E0
    ctx->pc = 0x141F74u;
    SET_GPR_U32(ctx, 31, 0x141F7Cu);
    ctx->pc = 0x141F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F74u;
    // 0x141f78: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434E0u, 0x141F74u, 0x141F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F7Cu;
label_141f7c:
    // 0x141f7c: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x141f7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x141f80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x141f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f84: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x141F84u;
    {
        const bool branch_taken_0x141f84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x141F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F84u;
        // 0x141f88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f84) {
            ctx->pc = 0x142110u;
            goto label_142110;
        }
    }
    ctx->pc = 0x141F8Cu;
    // 0x141f8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x141f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141f90:
    // 0x141f90: 0x8ec30034  lw          $v1, 0x34($s6)
    ctx->pc = 0x141f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x141f94: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x141f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x141f98: 0x739021  addu        $s2, $v1, $s3
    ctx->pc = 0x141f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x141f9c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x141f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x141fa0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x141fa4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x141fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x141fa8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x141FA8u;
    {
        const bool branch_taken_0x141fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FA8u;
        // 0x141fac: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fa8) {
            ctx->pc = 0x141FCCu;
            goto label_141fcc;
        }
    }
    ctx->pc = 0x141FB0u;
    // 0x141fb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x141fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141fb4: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x141fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x141fb8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x141fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x141fbc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x141fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x141fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141fc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x141fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x141fc8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x141fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_141fcc:
    // 0x141fcc: 0x0  nop
    ctx->pc = 0x141fccu;
    // NOP
    // 0x141fd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x141fd4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x141fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x141fd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141FD8u;
    {
        const bool branch_taken_0x141fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141fd8) {
            ctx->pc = 0x141FF4u;
            goto label_141ff4;
        }
    }
    ctx->pc = 0x141FE0u;
    // 0x141fe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x141fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141fe4: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x141fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x141fe8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x141fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x141fec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x141fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x141ff0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x141ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_141ff4:
    // 0x141ff4: 0x0  nop
    ctx->pc = 0x141ff4u;
    // NOP
    // 0x141ff8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x141ffc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x141ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x142000: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x142000u;
    {
        const bool branch_taken_0x142000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142000) {
            ctx->pc = 0x142084u;
            goto label_142084;
        }
    }
    ctx->pc = 0x142008u;
    // 0x142008: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x142008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14200c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x14200Cu;
    SET_GPR_U32(ctx, 31, 0x142014u);
    ctx->pc = 0x142010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14200Cu;
    // 0x142010: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x14200Cu, 0x142014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142014u;
label_142014:
    // 0x142014: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x142014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x142018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14201c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14201Cu;
    {
        const bool branch_taken_0x14201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14201Cu;
        // 0x142020: 0x27a60084  addiu       $a2, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14201c) {
            ctx->pc = 0x142070u;
            goto label_142070;
        }
    }
    ctx->pc = 0x142024u;
label_142024:
    // 0x142024: 0x0  nop
    ctx->pc = 0x142024u;
    // NOP
    // 0x142028: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x142028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x14202c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x14202cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x142030: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x142030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x142034: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x142034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x142038: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x142038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14203c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x14203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x142040: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x142040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x142044: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x142044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x142048: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x142048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x14204c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x14204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x142050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x142050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x142054: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x142054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x142058: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x142058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14205c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x14205cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x142060: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x142060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x142064: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x142064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x142068: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x142068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x14206c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x14206cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_142070:
    // 0x142070: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142074: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x142074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x142078: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x142078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14207c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x14207Cu;
    {
        const bool branch_taken_0x14207c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14207c) {
            ctx->pc = 0x142024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142024;
        }
    }
    ctx->pc = 0x142084u;
label_142084:
    // 0x142084: 0x0  nop
    ctx->pc = 0x142084u;
    // NOP
    // 0x142088: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x142088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14208c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x14208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x142090: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142090u;
    {
        const bool branch_taken_0x142090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142090) {
            ctx->pc = 0x1420ACu;
            goto label_1420ac;
        }
    }
    ctx->pc = 0x142098u;
    // 0x142098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14209c: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x14209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1420a0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1420a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1420a4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1420a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1420a8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1420a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1420ac:
    // 0x1420ac: 0x0  nop
    ctx->pc = 0x1420acu;
    // NOP
    // 0x1420b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1420b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1420b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1420b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1420b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1420B8u;
    {
        const bool branch_taken_0x1420b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1420b8) {
            ctx->pc = 0x142100u;
            goto label_142100;
        }
    }
    ctx->pc = 0x1420C0u;
    // 0x1420c0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x1420c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1420c4: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1420c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1420c8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1420c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1420cc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1420ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1420d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1420d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1420d4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1420d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1420d8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1420d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1420dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1420DCu;
    {
        const bool branch_taken_0x1420dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1420dc) {
            ctx->pc = 0x142100u;
            goto label_142100;
        }
    }
    ctx->pc = 0x1420E4u;
    // 0x1420e4: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1420e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1420e8: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1420e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1420ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1420ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1420f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1420f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1420f4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1420f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x1420f8: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1420f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1420fc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1420fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_142100:
    // 0x142100: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x142104: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x142104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x142108: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x142108u;
    {
        const bool branch_taken_0x142108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142108u;
        // 0x14210c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142108) {
            ctx->pc = 0x141F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141f90;
        }
    }
    ctx->pc = 0x142110u;
label_142110:
    // 0x142110: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x142110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142114: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x142114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x142118: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x142118u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14211c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14211cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x142120: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x142120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142124: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x142124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142128: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14212c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14212cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142134: 0x3e00008  jr          $ra
    ctx->pc = 0x142134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142134u;
        // 0x142138: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14213Cu;
}
