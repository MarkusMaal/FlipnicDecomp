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

// Function: FUN_00108ef0
// Address: 0x108ef0 - 0x109390
void FUN_00108ef0_0x108ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108ef0_0x108ef0");
#endif

    switch (ctx->pc) {
        case 0x109050u: goto label_109050;
        case 0x10905cu: goto label_10905c;
        case 0x1090b8u: goto label_1090b8;
        case 0x1090d4u: goto label_1090d4;
        case 0x109214u: goto label_109214;
        case 0x109220u: goto label_109220;
        case 0x109284u: goto label_109284;
        case 0x109294u: goto label_109294;
        case 0x10929cu: goto label_10929c;
        case 0x1092d0u: goto label_1092d0;
        case 0x1092dcu: goto label_1092dc;
        case 0x109318u: goto label_109318;
        case 0x109324u: goto label_109324;
        case 0x109364u: goto label_109364;
        case 0x10936cu: goto label_10936c;
        default: break;
    }

    ctx->pc = 0x108ef0u;

    // 0x108ef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x108ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x108ef4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x108ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x108ef8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x108ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x108efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x108efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x108f00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x108f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x108f04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x108f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x108f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x108f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x108f0c: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x108f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x108f10: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108F10u;
    {
        const bool branch_taken_0x108f10 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F10u;
        // 0x108f14: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f10) {
            ctx->pc = 0x108F20u;
            goto label_108f20;
        }
    }
    ctx->pc = 0x108F18u;
    // 0x108f18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x108F18u;
    {
        const bool branch_taken_0x108f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F18u;
        // 0x108f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f18) {
            ctx->pc = 0x108F3Cu;
            goto label_108f3c;
        }
    }
    ctx->pc = 0x108F20u;
label_108f20:
    // 0x108f20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x108f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108f24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108f30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x108f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108f34: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x108f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x108f38: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x108f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_108f3c:
    // 0x108f3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108F3Cu;
    {
        const bool branch_taken_0x108f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108f3c) {
            ctx->pc = 0x108F4Cu;
            goto label_108f4c;
        }
    }
    ctx->pc = 0x108F44u;
    // 0x108f44: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x108F44u;
    {
        const bool branch_taken_0x108f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F44u;
        // 0x108f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f44) {
            ctx->pc = 0x109370u;
            goto label_109370;
        }
    }
    ctx->pc = 0x108F4Cu;
label_108f4c:
    // 0x108f4c: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108f50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108F50u;
    {
        const bool branch_taken_0x108f50 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F50u;
        // 0x108f54: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f50) {
            ctx->pc = 0x108F60u;
            goto label_108f60;
        }
    }
    ctx->pc = 0x108F58u;
    // 0x108f58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108F58u;
    {
        const bool branch_taken_0x108f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F58u;
        // 0x108f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f58) {
            ctx->pc = 0x108F78u;
            goto label_108f78;
        }
    }
    ctx->pc = 0x108F60u;
label_108f60:
    // 0x108f60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108f64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108f6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x108f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108f70: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x108f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x108f74: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x108f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_108f78:
    // 0x108f78: 0x845201ec  lh          $s2, 0x1EC($v0)
    ctx->pc = 0x108f78u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 492)));
    // 0x108f7c: 0x64000e9  bltz        $s2, . + 4 + (0xE9 << 2)
    ctx->pc = 0x108F7Cu;
    {
        const bool branch_taken_0x108f7c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x108f7c) {
            ctx->pc = 0x109324u;
            goto label_109324;
        }
    }
    ctx->pc = 0x108F84u;
    // 0x108f84: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108f88: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108F88u;
    {
        const bool branch_taken_0x108f88 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F88u;
        // 0x108f8c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f88) {
            ctx->pc = 0x108F98u;
            goto label_108f98;
        }
    }
    ctx->pc = 0x108F90u;
    // 0x108f90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108F90u;
    {
        const bool branch_taken_0x108f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F90u;
        // 0x108f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f90) {
            ctx->pc = 0x108FB0u;
            goto label_108fb0;
        }
    }
    ctx->pc = 0x108F98u;
label_108f98:
    // 0x108f98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108f9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108fa4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x108fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108fa8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x108fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x108fac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x108facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_108fb0:
    // 0x108fb0: 0x844301e8  lh          $v1, 0x1E8($v0)
    ctx->pc = 0x108fb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x108fb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108fb8: 0x146200da  bne         $v1, $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x108FB8u;
    {
        const bool branch_taken_0x108fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108fb8) {
            ctx->pc = 0x109324u;
            goto label_109324;
        }
    }
    ctx->pc = 0x108FC0u;
    // 0x108fc0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108fc4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108fc8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x108fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x108fcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x108fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108fd0: 0x80500024  lb          $s0, 0x24($v0)
    ctx->pc = 0x108fd0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x108fd4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108FD4u;
    {
        const bool branch_taken_0x108fd4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x108fd4) {
            ctx->pc = 0x108FE4u;
            goto label_108fe4;
        }
    }
    ctx->pc = 0x108FDCu;
    // 0x108fdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108FDCu;
    {
        const bool branch_taken_0x108fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108fdc) {
            ctx->pc = 0x108FF0u;
            goto label_108ff0;
        }
    }
    ctx->pc = 0x108FE4u;
label_108fe4:
    // 0x108fe4: 0x80420026  lb          $v0, 0x26($v0)
    ctx->pc = 0x108fe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x108fe8: 0x1c400001  bgtz        $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x108FE8u;
    {
        const bool branch_taken_0x108fe8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x108fe8) {
            ctx->pc = 0x108FF0u;
            goto label_108ff0;
        }
    }
    ctx->pc = 0x108FF0u;
label_108ff0:
    // 0x108ff0: 0x1a0000bc  blez        $s0, . + 4 + (0xBC << 2)
    ctx->pc = 0x108FF0u;
    {
        const bool branch_taken_0x108ff0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x108ff0) {
            ctx->pc = 0x1092E4u;
            goto label_1092e4;
        }
    }
    ctx->pc = 0x108FF8u;
    // 0x108ff8: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108ffc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108FFCu;
    {
        const bool branch_taken_0x108ffc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x109000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FFCu;
        // 0x109000: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ffc) {
            ctx->pc = 0x10900Cu;
            goto label_10900c;
        }
    }
    ctx->pc = 0x109004u;
    // 0x109004: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109004u;
    {
        const bool branch_taken_0x109004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109004u;
        // 0x109008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109004) {
            ctx->pc = 0x109024u;
            goto label_109024;
        }
    }
    ctx->pc = 0x10900Cu;
label_10900c:
    // 0x10900c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10900cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109010: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109018: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10901c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x10901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x109020: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x109020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_109024:
    // 0x109024: 0x844301ea  lh          $v1, 0x1EA($v0)
    ctx->pc = 0x109024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 490)));
    // 0x109028: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x109028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10902c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10902Cu;
    {
        const bool branch_taken_0x10902c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10902c) {
            ctx->pc = 0x109064u;
            goto label_109064;
        }
    }
    ctx->pc = 0x109034u;
    // 0x109034: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x109034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x109038: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109038u;
    {
        const bool branch_taken_0x109038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x109038) {
            ctx->pc = 0x109048u;
            goto label_109048;
        }
    }
    ctx->pc = 0x109040u;
    // 0x109040: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x109040u;
    {
        const bool branch_taken_0x109040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109040u;
        // 0x109044: 0x8e632cd0  lw          $v1, 0x2CD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109040) {
            ctx->pc = 0x1092A0u;
            goto label_1092a0;
        }
    }
    ctx->pc = 0x109048u;
label_109048:
    // 0x109048: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x109048u;
    SET_GPR_U32(ctx, 31, 0x109050u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109048u, 0x109050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109050u;
label_109050:
    // 0x109050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109054: 0xc049f0c  jal         func_127C30
    ctx->pc = 0x109054u;
    SET_GPR_U32(ctx, 31, 0x10905Cu);
    ctx->pc = 0x109058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109054u;
    // 0x109058: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C30u, 0x109054u, 0x10905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10905Cu;
label_10905c:
    // 0x10905c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x10905Cu;
    {
        const bool branch_taken_0x10905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10905c) {
            ctx->pc = 0x10929Cu;
            goto label_10929c;
        }
    }
    ctx->pc = 0x109064u;
label_109064:
    // 0x109064: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x109064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x109068: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109068u;
    {
        const bool branch_taken_0x109068 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109068u;
        // 0x10906c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109068) {
            ctx->pc = 0x109078u;
            goto label_109078;
        }
    }
    ctx->pc = 0x109070u;
    // 0x109070: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109070u;
    {
        const bool branch_taken_0x109070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109070u;
        // 0x109074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109070) {
            ctx->pc = 0x109090u;
            goto label_109090;
        }
    }
    ctx->pc = 0x109078u;
label_109078:
    // 0x109078: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x109078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10907c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10907cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109084: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109088: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x109088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10908c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x10908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_109090:
    // 0x109090: 0xc4410348  lwc1        $f1, 0x348($v0)
    ctx->pc = 0x109090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x109094: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x109094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x109098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10909c: 0x0  nop
    ctx->pc = 0x10909cu;
    // NOP
    // 0x1090a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1090a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1090a4: 0x0  nop
    ctx->pc = 0x1090a4u;
    // NOP
    // 0x1090a8: 0x4501007c  bc1t        . + 4 + (0x7C << 2)
    ctx->pc = 0x1090A8u;
    {
        const bool branch_taken_0x1090a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1090ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090A8u;
        // 0x1090ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090a8) {
            ctx->pc = 0x10929Cu;
            goto label_10929c;
        }
    }
    ctx->pc = 0x1090B0u;
    // 0x1090b0: 0xc054754  jal         func_151D50
    ctx->pc = 0x1090B0u;
    SET_GPR_U32(ctx, 31, 0x1090B8u);
    ctx->pc = 0x1090B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090B0u;
    // 0x1090b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151D50u, 0x1090B0u, 0x1090B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090B8u;
label_1090b8:
    // 0x1090b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1090b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090bc: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1090BCu;
    {
        const bool branch_taken_0x1090bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1090bc) {
            ctx->pc = 0x10929Cu;
            goto label_10929c;
        }
    }
    ctx->pc = 0x1090C4u;
    // 0x1090c4: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x1090c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1090c8: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x1090c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1090cc: 0xc057040  jal         func_15C100
    ctx->pc = 0x1090CCu;
    SET_GPR_U32(ctx, 31, 0x1090D4u);
    ctx->pc = 0x1090D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090CCu;
    // 0x1090d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1090CCu, 0x1090D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090D4u;
label_1090d4:
    // 0x1090d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1090d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090d8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1090d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1090dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1090dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1090e0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1090e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1090e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1090e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1090e8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1090e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1090ec: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1090ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1090f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1090f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1090f4: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x1090f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x1090f8: 0x8c4201f0  lw          $v0, 0x1F0($v0)
    ctx->pc = 0x1090f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1090fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1090fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109100: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x109100u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109104: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x109104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x109108: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x109108u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10910c: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x10910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x109110: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109110u;
    {
        const bool branch_taken_0x109110 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x109110) {
            ctx->pc = 0x109120u;
            goto label_109120;
        }
    }
    ctx->pc = 0x109118u;
    // 0x109118: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x109118u;
    {
        const bool branch_taken_0x109118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109118u;
        // 0x10911c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109118) {
            ctx->pc = 0x10913Cu;
            goto label_10913c;
        }
    }
    ctx->pc = 0x109120u;
label_109120:
    // 0x109120: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x109120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x109124: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x109124u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109128: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10912c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109130: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109134: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x109134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x109138: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x109138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_10913c:
    // 0x10913c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x10913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x109140: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x109140u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109144: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x109144u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109148: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x109148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10914c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x10914cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x109150: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x109150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x109154: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109154u;
    {
        const bool branch_taken_0x109154 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x109158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109154u;
        // 0x109158: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109154) {
            ctx->pc = 0x109164u;
            goto label_109164;
        }
    }
    ctx->pc = 0x10915Cu;
    // 0x10915c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10915Cu;
    {
        const bool branch_taken_0x10915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10915Cu;
        // 0x109160: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10915c) {
            ctx->pc = 0x10917Cu;
            goto label_10917c;
        }
    }
    ctx->pc = 0x109164u;
label_109164:
    // 0x109164: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x109164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10916c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109170: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109174: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x109174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x109178: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x109178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_10917c:
    // 0x10917c: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x10917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x109180: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109180u;
    {
        const bool branch_taken_0x109180 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x109184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109180u;
        // 0x109184: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109180) {
            ctx->pc = 0x109190u;
            goto label_109190;
        }
    }
    ctx->pc = 0x109188u;
    // 0x109188: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109188u;
    {
        const bool branch_taken_0x109188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109188u;
        // 0x10918c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109188) {
            ctx->pc = 0x1091A8u;
            goto label_1091a8;
        }
    }
    ctx->pc = 0x109190u;
label_109190:
    // 0x109190: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x109190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109194: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10919c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10919cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1091a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1091a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1091a4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1091a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1091a8:
    // 0x1091a8: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x1091a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1091ac: 0x7c460050  sq          $a2, 0x50($v0)
    ctx->pc = 0x1091acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 6));
    // 0x1091b0: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x1091b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x1091b4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1091B4u;
    {
        const bool branch_taken_0x1091b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1091b4) {
            ctx->pc = 0x1091C4u;
            goto label_1091c4;
        }
    }
    ctx->pc = 0x1091BCu;
    // 0x1091bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1091BCu;
    {
        const bool branch_taken_0x1091bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091BCu;
        // 0x1091c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091bc) {
            ctx->pc = 0x1091E0u;
            goto label_1091e0;
        }
    }
    ctx->pc = 0x1091C4u;
label_1091c4:
    // 0x1091c4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1091c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1091c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1091c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1091cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1091ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1091d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1091d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1091d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1091d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1091d8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1091d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1091dc: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x1091dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1091e0:
    // 0x1091e0: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1091E0u;
    {
        const bool branch_taken_0x1091e0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1091E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091E0u;
        // 0x1091e4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091e0) {
            ctx->pc = 0x1091FCu;
            goto label_1091fc;
        }
    }
    ctx->pc = 0x1091E8u;
    // 0x1091e8: 0x846201ec  lh          $v0, 0x1EC($v1)
    ctx->pc = 0x1091e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 492)));
    // 0x1091ec: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1091ECu;
    {
        const bool branch_taken_0x1091ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1091ec) {
            ctx->pc = 0x1091F8u;
            goto label_1091f8;
        }
    }
    ctx->pc = 0x1091F4u;
    // 0x1091f4: 0xa46201ee  sh          $v0, 0x1EE($v1)
    ctx->pc = 0x1091f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 494), (uint16_t)GPR_U32(ctx, 2));
label_1091f8:
    // 0x1091f8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1091f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1091fc:
    // 0x1091fc: 0xa47101ec  sh          $s1, 0x1EC($v1)
    ctx->pc = 0x1091fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 492), (uint16_t)GPR_U32(ctx, 17));
    // 0x109200: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x109200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x109204: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x109204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x109208: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10920c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x10920Cu;
    SET_GPR_U32(ctx, 31, 0x109214u);
    ctx->pc = 0x109210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10920Cu;
    // 0x109210: 0x80540024  lb          $s4, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10920Cu, 0x109214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109214u;
label_109214:
    // 0x109214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109218: 0xc04a078  jal         func_1281E0
    ctx->pc = 0x109218u;
    SET_GPR_U32(ctx, 31, 0x109220u);
    ctx->pc = 0x10921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109218u;
    // 0x10921c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1281E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1281E0u, 0x109218u, 0x109220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109220u;
label_109220:
    // 0x109220: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x109220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x109224: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x109224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x109228: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x109228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x10922c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x10922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x109230: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x109230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x109234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109238: 0xac830234  sw          $v1, 0x234($a0)
    ctx->pc = 0x109238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 3));
    // 0x10923c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x10923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x109240: 0xac430234  sw          $v1, 0x234($v0)
    ctx->pc = 0x109240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 564), GPR_U32(ctx, 3));
    // 0x109244: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x109244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x109248: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109248u;
    {
        const bool branch_taken_0x109248 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109248u;
        // 0x10924c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109248) {
            ctx->pc = 0x109258u;
            goto label_109258;
        }
    }
    ctx->pc = 0x109250u;
    // 0x109250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109250u;
    {
        const bool branch_taken_0x109250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109250u;
        // 0x109254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109250) {
            ctx->pc = 0x109270u;
            goto label_109270;
        }
    }
    ctx->pc = 0x109258u;
label_109258:
    // 0x109258: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x109258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10925c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10925cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109264: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109268: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x109268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10926c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x10926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_109270:
    // 0x109270: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x109270u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x109274: 0x244702d0  addiu       $a3, $v0, 0x2D0
    ctx->pc = 0x109274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x109278: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x109278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x10927c: 0xc058138  jal         func_1604E0
    ctx->pc = 0x10927Cu;
    SET_GPR_U32(ctx, 31, 0x109284u);
    ctx->pc = 0x109280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10927Cu;
    // 0x109280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x10927Cu, 0x109284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109284u;
label_109284:
    // 0x109284: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x109284u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x109288: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x109288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x10928c: 0xc058174  jal         func_1605D0
    ctx->pc = 0x10928Cu;
    SET_GPR_U32(ctx, 31, 0x109294u);
    ctx->pc = 0x109290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10928Cu;
    // 0x109290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1605D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1605D0u, 0x10928Cu, 0x109294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109294u;
label_109294:
    // 0x109294: 0xc054790  jal         func_151E40
    ctx->pc = 0x109294u;
    SET_GPR_U32(ctx, 31, 0x10929Cu);
    ctx->pc = 0x109298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109294u;
    // 0x109298: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151E40u, 0x109294u, 0x10929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10929Cu;
label_10929c:
    // 0x10929c: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x10929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
label_1092a0:
    // 0x1092a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1092A0u;
    {
        const bool branch_taken_0x1092a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1092A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092A0u;
        // 0x1092a4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092a0) {
            ctx->pc = 0x1092B0u;
            goto label_1092b0;
        }
    }
    ctx->pc = 0x1092A8u;
    // 0x1092a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1092A8u;
    {
        const bool branch_taken_0x1092a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092A8u;
        // 0x1092ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092a8) {
            ctx->pc = 0x1092C8u;
            goto label_1092c8;
        }
    }
    ctx->pc = 0x1092B0u;
label_1092b0:
    // 0x1092b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1092b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1092b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1092b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1092b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1092b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1092bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1092bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1092c0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1092c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1092c4: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1092c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1092c8:
    // 0x1092c8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1092C8u;
    SET_GPR_U32(ctx, 31, 0x1092D0u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1092C8u, 0x1092D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092D0u;
label_1092d0:
    // 0x1092d0: 0xc60c0348  lwc1        $f12, 0x348($s0)
    ctx->pc = 0x1092d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1092d4: 0xc049f2c  jal         func_127CB0
    ctx->pc = 0x1092D4u;
    SET_GPR_U32(ctx, 31, 0x1092DCu);
    ctx->pc = 0x1092D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092D4u;
    // 0x1092d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CB0u, 0x1092D4u, 0x1092DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092DCu;
label_1092dc:
    // 0x1092dc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1092DCu;
    {
        const bool branch_taken_0x1092dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092DCu;
        // 0x1092e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092dc) {
            ctx->pc = 0x109370u;
            goto label_109370;
        }
    }
    ctx->pc = 0x1092E4u;
label_1092e4:
    // 0x1092e4: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x1092e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x1092e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1092E8u;
    {
        const bool branch_taken_0x1092e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1092ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092E8u;
        // 0x1092ec: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092e8) {
            ctx->pc = 0x1092F8u;
            goto label_1092f8;
        }
    }
    ctx->pc = 0x1092F0u;
    // 0x1092f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1092F0u;
    {
        const bool branch_taken_0x1092f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092F0u;
        // 0x1092f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092f0) {
            ctx->pc = 0x109310u;
            goto label_109310;
        }
    }
    ctx->pc = 0x1092F8u;
label_1092f8:
    // 0x1092f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1092f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1092fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1092fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109304: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109308: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x109308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10930c: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x10930cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_109310:
    // 0x109310: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x109310u;
    SET_GPR_U32(ctx, 31, 0x109318u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109310u, 0x109318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109318u;
label_109318:
    // 0x109318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10931c: 0xc04a018  jal         func_128060
    ctx->pc = 0x10931Cu;
    SET_GPR_U32(ctx, 31, 0x109324u);
    ctx->pc = 0x109320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10931Cu;
    // 0x109320: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x10931Cu, 0x109324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109324u;
label_109324:
    // 0x109324: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x109324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x109328: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109328u;
    {
        const bool branch_taken_0x109328 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109328u;
        // 0x10932c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109328) {
            ctx->pc = 0x109338u;
            goto label_109338;
        }
    }
    ctx->pc = 0x109330u;
    // 0x109330: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109330u;
    {
        const bool branch_taken_0x109330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109330u;
        // 0x109334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109330) {
            ctx->pc = 0x109350u;
            goto label_109350;
        }
    }
    ctx->pc = 0x109338u;
label_109338:
    // 0x109338: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x109338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10933c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10933cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109344: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109348: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x109348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10934c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x10934cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_109350:
    // 0x109350: 0x844201f0  lh          $v0, 0x1F0($v0)
    ctx->pc = 0x109350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x109354: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109354u;
    {
        const bool branch_taken_0x109354 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x109354) {
            ctx->pc = 0x10936Cu;
            goto label_10936c;
        }
    }
    ctx->pc = 0x10935Cu;
    // 0x10935c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x10935Cu;
    SET_GPR_U32(ctx, 31, 0x109364u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10935Cu, 0x109364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109364u;
label_109364:
    // 0x109364: 0xc049f30  jal         func_127CC0
    ctx->pc = 0x109364u;
    SET_GPR_U32(ctx, 31, 0x10936Cu);
    ctx->pc = 0x109368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109364u;
    // 0x109368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CC0u, 0x109364u, 0x10936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10936Cu;
label_10936c:
    // 0x10936c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10936cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109370:
    // 0x109370: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x109370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109374: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x109374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109378: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x109378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10937c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10937cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109388: 0x3e00008  jr          $ra
    ctx->pc = 0x109388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109388u;
        // 0x10938c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109390u;
}
