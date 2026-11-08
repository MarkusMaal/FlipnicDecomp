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

// Function: FUN_0014ec50
// Address: 0x14ec50 - 0x14eeb8
void FUN_0014ec50_0x14ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ec50_0x14ec50");
#endif

    switch (ctx->pc) {
        case 0x14ecd4u: goto label_14ecd4;
        case 0x14ed34u: goto label_14ed34;
        case 0x14ed68u: goto label_14ed68;
        case 0x14edbcu: goto label_14edbc;
        case 0x14edc4u: goto label_14edc4;
        case 0x14ede0u: goto label_14ede0;
        case 0x14edecu: goto label_14edec;
        case 0x14ee18u: goto label_14ee18;
        case 0x14ee30u: goto label_14ee30;
        case 0x14ee50u: goto label_14ee50;
        case 0x14ee58u: goto label_14ee58;
        case 0x14ee6cu: goto label_14ee6c;
        default: break;
    }

    ctx->pc = 0x14ec50u;

    // 0x14ec50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14ec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14ec54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14ec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14ec58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14ec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14ec5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14ec5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14ec60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14ec60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14ec64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14ec64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ec6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14ec6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14ec70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ec78: 0x2321823  subu        $v1, $s1, $s2
    ctx->pc = 0x14ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x14ec7c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EC7Cu;
    {
        const bool branch_taken_0x14ec7c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC7Cu;
        // 0x14ec80: 0x32103  sra         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec7c) {
            ctx->pc = 0x14EC8Cu;
            goto label_14ec8c;
        }
    }
    ctx->pc = 0x14EC84u;
    // 0x14ec84: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x14ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x14ec88: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x14ec88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_14ec8c:
    // 0x14ec8c: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x14ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x14ec90: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x14ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14ec94: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ec98: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14ec98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14ec9c: 0x1420003e  bnez        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x14EC9Cu;
    {
        const bool branch_taken_0x14ec9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC9Cu;
        // 0x14eca0: 0x3c011000  lui         $at, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec9c) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14ECA4u;
    // 0x14eca4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14eca8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14eca8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14ecac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14ECACu;
    {
        const bool branch_taken_0x14ecac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECACu;
        // 0x14ecb0: 0x27a3006c  addiu       $v1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecac) {
            ctx->pc = 0x14ECB8u;
            goto label_14ecb8;
        }
    }
    ctx->pc = 0x14ECB4u;
    // 0x14ecb4: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x14ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_14ecb8:
    // 0x14ecb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ecbc: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x14ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14ecc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14ecc4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x14ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14ecc8: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x14ecc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14eccc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14ECCCu;
    {
        const bool branch_taken_0x14eccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eccc) {
            ctx->pc = 0x14ED04u;
            goto label_14ed04;
        }
    }
    ctx->pc = 0x14ECD4u;
label_14ecd4:
    // 0x14ecd4: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x14ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ecd8: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x14ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ecdc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x14ecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ece0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x14ece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ece4: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x14ece4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x14ece8: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x14ece8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x14ecec: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x14ececu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x14ecf0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x14ecf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x14ecf4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14ecf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14ecf8: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x14ecf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14ecfc: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x14ECFCu;
    {
        const bool branch_taken_0x14ecfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECFCu;
        // 0x14ed00: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecfc) {
            ctx->pc = 0x14ECD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ecd4;
        }
    }
    ctx->pc = 0x14ED04u;
label_14ed04:
    // 0x14ed04: 0x0  nop
    ctx->pc = 0x14ed04u;
    // NOP
    // 0x14ed08: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x14ed08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14ed0c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14ed10: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x14ed10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14ed14: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x14ED14u;
    {
        const bool branch_taken_0x14ed14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED14u;
        // 0x14ed18: 0x66082b  sltu        $at, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed14) {
            ctx->pc = 0x14ED58u;
            goto label_14ed58;
        }
    }
    ctx->pc = 0x14ED1Cu;
    // 0x14ed1c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x14ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14ed20: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x14ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14ed24: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x14ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ed28: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x14ed28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14ed2c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14ED2Cu;
    {
        const bool branch_taken_0x14ed2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed2c) {
            ctx->pc = 0x14ED50u;
            goto label_14ed50;
        }
    }
    ctx->pc = 0x14ED34u;
label_14ed34:
    // 0x14ed34: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14ed38: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x14ed38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14ed3c: 0x0  nop
    ctx->pc = 0x14ed3cu;
    // NOP
    // 0x14ed40: 0x0  nop
    ctx->pc = 0x14ed40u;
    // NOP
    // 0x14ed44: 0x0  nop
    ctx->pc = 0x14ed44u;
    // NOP
    // 0x14ed48: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14ED48u;
    {
        const bool branch_taken_0x14ed48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ed48) {
            ctx->pc = 0x14ED34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ed34;
        }
    }
    ctx->pc = 0x14ED50u;
label_14ed50:
    // 0x14ed50: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x14ED50u;
    {
        const bool branch_taken_0x14ed50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED50u;
        // 0x14ed54: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed50) {
            ctx->pc = 0x14EE98u;
            goto label_14ee98;
        }
    }
    ctx->pc = 0x14ED58u;
label_14ed58:
    // 0x14ed58: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x14ED58u;
    {
        const bool branch_taken_0x14ed58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed58) {
            ctx->pc = 0x14EE98u;
            goto label_14ee98;
        }
    }
    ctx->pc = 0x14ED60u;
    // 0x14ed60: 0x1251004d  beq         $s2, $s1, . + 4 + (0x4D << 2)
    ctx->pc = 0x14ED60u;
    {
        const bool branch_taken_0x14ed60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x14ed60) {
            ctx->pc = 0x14EE98u;
            goto label_14ee98;
        }
    }
    ctx->pc = 0x14ED68u;
label_14ed68:
    // 0x14ed68: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14ED68u;
    {
        const bool branch_taken_0x14ed68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed68) {
            ctx->pc = 0x14ED78u;
            goto label_14ed78;
        }
    }
    ctx->pc = 0x14ED70u;
    // 0x14ed70: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x14ed70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ed74: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14ed74u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_14ed78:
    // 0x14ed78: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14ed7c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x14ed7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14ed80: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14ed84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ed88: 0x1651fff7  bne         $s2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14ED88u;
    {
        const bool branch_taken_0x14ed88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x14ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED88u;
        // 0x14ed8c: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed88) {
            ctx->pc = 0x14ED68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ed68;
        }
    }
    ctx->pc = 0x14ED90u;
    // 0x14ed90: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x14ED90u;
    {
        const bool branch_taken_0x14ed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed90) {
            ctx->pc = 0x14EE98u;
            goto label_14ee98;
        }
    }
    ctx->pc = 0x14ED98u;
label_14ed98:
    // 0x14ed98: 0x81082b  sltu        $at, $a0, $at
    ctx->pc = 0x14ed98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14ed9c: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14ED9Cu;
    {
        const bool branch_taken_0x14ed9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ed9c) {
            ctx->pc = 0x14EDC4u;
            goto label_14edc4;
        }
    }
    ctx->pc = 0x14EDA4u;
    // 0x14eda4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14eda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14eda8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14edac: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14edacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14edb0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14edb4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EDB4u;
    SET_GPR_U32(ctx, 31, 0x14EDBCu);
    ctx->pc = 0x14EDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDB4u;
    // 0x14edb8: 0x24a5f300  addiu       $a1, $a1, -0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EDB4u, 0x14EDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDBCu;
label_14edbc:
    // 0x14edbc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EDBCu;
    SET_GPR_U32(ctx, 31, 0x14EDC4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EDBCu, 0x14EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDC4u;
label_14edc4:
    // 0x14edc4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x14edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14edc8: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x14edc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14edcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14edccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14edd0: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x14edd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14edd4: 0x214082b  sltu        $at, $s0, $s4
    ctx->pc = 0x14edd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14edd8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EDD8u;
    {
        const bool branch_taken_0x14edd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14edd8) {
            ctx->pc = 0x14EDFCu;
            goto label_14edfc;
        }
    }
    ctx->pc = 0x14EDE0u;
label_14ede0:
    // 0x14ede0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ede0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ede4: 0xc053bb0  jal         func_14EEC0
    ctx->pc = 0x14EDE4u;
    SET_GPR_U32(ctx, 31, 0x14EDECu);
    ctx->pc = 0x14EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDE4u;
    // 0x14ede8: 0x2694fff0  addiu       $s4, $s4, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EEC0u, 0x14EDE4u, 0x14EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDECu;
label_14edec:
    // 0x14edec: 0x214082b  sltu        $at, $s0, $s4
    ctx->pc = 0x14edecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14edf0: 0x0  nop
    ctx->pc = 0x14edf0u;
    // NOP
    // 0x14edf4: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14EDF4u;
    {
        const bool branch_taken_0x14edf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14edf4) {
            ctx->pc = 0x14EDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ede0;
        }
    }
    ctx->pc = 0x14EDFCu;
label_14edfc:
    // 0x14edfc: 0x0  nop
    ctx->pc = 0x14edfcu;
    // NOP
    // 0x14ee00: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x14ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x14ee04: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x14ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14ee08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EE08u;
    {
        const bool branch_taken_0x14ee08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee08) {
            ctx->pc = 0x14EE20u;
            goto label_14ee20;
        }
    }
    ctx->pc = 0x14EE10u;
    // 0x14ee10: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14EE10u;
    SET_GPR_U32(ctx, 31, 0x14EE18u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14EE10u, 0x14EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE18u;
label_14ee18:
    // 0x14ee18: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x14ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x14ee1c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x14ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_14ee20:
    // 0x14ee20: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x14ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14ee24: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x14ee24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x14ee28: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14EE28u;
    SET_GPR_U32(ctx, 31, 0x14EE30u);
    ctx->pc = 0x14EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE28u;
    // 0x14ee2c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14EE28u, 0x14EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE30u;
label_14ee30:
    // 0x14ee30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14ee30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee34: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EE34u;
    {
        const bool branch_taken_0x14ee34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE34u;
        // 0x14ee38: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee34) {
            ctx->pc = 0x14EE58u;
            goto label_14ee58;
        }
    }
    ctx->pc = 0x14EE3Cu;
    // 0x14ee3c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14ee40: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14ee44: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14ee48: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EE48u;
    SET_GPR_U32(ctx, 31, 0x14EE50u);
    ctx->pc = 0x14EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE48u;
    // 0x14ee4c: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EE48u, 0x14EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE50u;
label_14ee50:
    // 0x14ee50: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EE50u;
    SET_GPR_U32(ctx, 31, 0x14EE58u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EE50u, 0x14EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE58u;
label_14ee58:
    // 0x14ee58: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x14ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x14ee5c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x14ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14ee60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x14ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x14ee64: 0x1251000c  beq         $s2, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x14EE64u;
    {
        const bool branch_taken_0x14ee64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x14EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE64u;
        // 0x14ee68: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee64) {
            ctx->pc = 0x14EE98u;
            goto label_14ee98;
        }
    }
    ctx->pc = 0x14EE6Cu;
label_14ee6c:
    // 0x14ee6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EE6Cu;
    {
        const bool branch_taken_0x14ee6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee6c) {
            ctx->pc = 0x14EE7Cu;
            goto label_14ee7c;
        }
    }
    ctx->pc = 0x14EE74u;
    // 0x14ee74: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x14ee74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ee78: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x14ee78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_14ee7c:
    // 0x14ee7c: 0x0  nop
    ctx->pc = 0x14ee7cu;
    // NOP
    // 0x14ee80: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14ee84: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x14ee84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14ee88: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x14ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x14ee8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ee90: 0x1651fff6  bne         $s2, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x14EE90u;
    {
        const bool branch_taken_0x14ee90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x14EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE90u;
        // 0x14ee94: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee90) {
            ctx->pc = 0x14EE6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ee6c;
        }
    }
    ctx->pc = 0x14EE98u;
label_14ee98:
    // 0x14ee98: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14ee98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ee9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14ee9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14eea0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14eea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14eea4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14eea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14eea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14eea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eeac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14eeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14eeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x14EEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEB0u;
        // 0x14eeb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EEB8u;
}
