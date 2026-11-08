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

// Function: FUN_0015d200
// Address: 0x15d200 - 0x15d358
void FUN_0015d200_0x15d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d200_0x15d200");
#endif

    switch (ctx->pc) {
        case 0x15d200u: goto label_15d200;
        case 0x15d204u: goto label_15d204;
        case 0x15d208u: goto label_15d208;
        case 0x15d20cu: goto label_15d20c;
        case 0x15d210u: goto label_15d210;
        case 0x15d214u: goto label_15d214;
        case 0x15d218u: goto label_15d218;
        case 0x15d21cu: goto label_15d21c;
        case 0x15d220u: goto label_15d220;
        case 0x15d224u: goto label_15d224;
        case 0x15d228u: goto label_15d228;
        case 0x15d22cu: goto label_15d22c;
        case 0x15d230u: goto label_15d230;
        case 0x15d234u: goto label_15d234;
        case 0x15d238u: goto label_15d238;
        case 0x15d23cu: goto label_15d23c;
        case 0x15d240u: goto label_15d240;
        case 0x15d244u: goto label_15d244;
        case 0x15d248u: goto label_15d248;
        case 0x15d24cu: goto label_15d24c;
        case 0x15d250u: goto label_15d250;
        case 0x15d254u: goto label_15d254;
        case 0x15d258u: goto label_15d258;
        case 0x15d25cu: goto label_15d25c;
        case 0x15d260u: goto label_15d260;
        case 0x15d264u: goto label_15d264;
        case 0x15d268u: goto label_15d268;
        case 0x15d26cu: goto label_15d26c;
        case 0x15d270u: goto label_15d270;
        case 0x15d274u: goto label_15d274;
        case 0x15d278u: goto label_15d278;
        case 0x15d27cu: goto label_15d27c;
        case 0x15d280u: goto label_15d280;
        case 0x15d284u: goto label_15d284;
        case 0x15d288u: goto label_15d288;
        case 0x15d28cu: goto label_15d28c;
        case 0x15d290u: goto label_15d290;
        case 0x15d294u: goto label_15d294;
        case 0x15d298u: goto label_15d298;
        case 0x15d29cu: goto label_15d29c;
        case 0x15d2a0u: goto label_15d2a0;
        case 0x15d2a4u: goto label_15d2a4;
        case 0x15d2a8u: goto label_15d2a8;
        case 0x15d2acu: goto label_15d2ac;
        case 0x15d2b0u: goto label_15d2b0;
        case 0x15d2b4u: goto label_15d2b4;
        case 0x15d2b8u: goto label_15d2b8;
        case 0x15d2bcu: goto label_15d2bc;
        case 0x15d2c0u: goto label_15d2c0;
        case 0x15d2c4u: goto label_15d2c4;
        case 0x15d2c8u: goto label_15d2c8;
        case 0x15d2ccu: goto label_15d2cc;
        case 0x15d2d0u: goto label_15d2d0;
        case 0x15d2d4u: goto label_15d2d4;
        case 0x15d2d8u: goto label_15d2d8;
        case 0x15d2dcu: goto label_15d2dc;
        case 0x15d2e0u: goto label_15d2e0;
        case 0x15d2e4u: goto label_15d2e4;
        case 0x15d2e8u: goto label_15d2e8;
        case 0x15d2ecu: goto label_15d2ec;
        case 0x15d2f0u: goto label_15d2f0;
        case 0x15d2f4u: goto label_15d2f4;
        case 0x15d2f8u: goto label_15d2f8;
        case 0x15d2fcu: goto label_15d2fc;
        case 0x15d300u: goto label_15d300;
        case 0x15d304u: goto label_15d304;
        case 0x15d308u: goto label_15d308;
        case 0x15d30cu: goto label_15d30c;
        case 0x15d310u: goto label_15d310;
        case 0x15d314u: goto label_15d314;
        case 0x15d318u: goto label_15d318;
        case 0x15d31cu: goto label_15d31c;
        case 0x15d320u: goto label_15d320;
        case 0x15d324u: goto label_15d324;
        case 0x15d328u: goto label_15d328;
        case 0x15d32cu: goto label_15d32c;
        case 0x15d330u: goto label_15d330;
        case 0x15d334u: goto label_15d334;
        case 0x15d338u: goto label_15d338;
        case 0x15d33cu: goto label_15d33c;
        case 0x15d340u: goto label_15d340;
        case 0x15d344u: goto label_15d344;
        case 0x15d348u: goto label_15d348;
        case 0x15d34cu: goto label_15d34c;
        case 0x15d350u: goto label_15d350;
        case 0x15d354u: goto label_15d354;
        default: break;
    }

    ctx->pc = 0x15d200u;

label_15d200:
    // 0x15d200: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x15d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_15d204:
    // 0x15d204: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x15d204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_15d208:
    // 0x15d208: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15d208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15d20c:
    // 0x15d20c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15d210:
    // 0x15d210: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15d210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15d214:
    // 0x15d214: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15d218:
    // 0x15d218: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15d21c:
    // 0x15d21c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x15d21cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15d220:
    // 0x15d220: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15d224:
    // 0x15d224: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15d224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15d228:
    // 0x15d228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15d22c:
    // 0x15d22c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15d22cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d230:
    // 0x15d230: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15d234:
    // 0x15d234: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15d238:
    // 0x15d238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15d23c:
    // 0x15d23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15d240:
    // 0x15d240: 0x8c972c20  lw          $s7, 0x2C20($a0)
    ctx->pc = 0x15d240u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11296)));
label_15d244:
    // 0x15d244: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15d244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d248:
    // 0x15d248: 0x8c962c1c  lw          $s6, 0x2C1C($a0)
    ctx->pc = 0x15d248u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
label_15d24c:
    // 0x15d24c: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x15d24cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_15d250:
    // 0x15d250: 0x2c32021  addu        $a0, $s6, $v1
    ctx->pc = 0x15d250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_15d254:
    // 0x15d254: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x15d254u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_15d258:
    // 0x15d258: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x15d258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_15d25c:
    // 0x15d25c: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x15d25cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_15d260:
    // 0x15d260: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_15d264:
    if (ctx->pc == 0x15D264u) {
        ctx->pc = 0x15D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D260u;
        // 0x15d264: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D268u;
        goto label_15d268;
    }
    ctx->pc = 0x15D260u;
    {
        const bool branch_taken_0x15d260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D260u;
        // 0x15d264: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d260) {
            ctx->pc = 0x15D328u;
            goto label_15d328;
        }
    }
    ctx->pc = 0x15D268u;
label_15d268:
    // 0x15d268: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15d268u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d26c:
    // 0x15d26c: 0x2d42821  addu        $a1, $s6, $s4
    ctx->pc = 0x15d26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_15d270:
    // 0x15d270: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15d270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15d274:
    // 0x15d274: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x15d274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_15d278:
    // 0x15d278: 0x14640026  bne         $v1, $a0, . + 4 + (0x26 << 2)
label_15d27c:
    if (ctx->pc == 0x15D27Cu) {
        ctx->pc = 0x15D280u;
        goto label_15d280;
    }
    ctx->pc = 0x15D278u;
    {
        const bool branch_taken_0x15d278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15d278) {
            ctx->pc = 0x15D314u;
            goto label_15d314;
        }
    }
    ctx->pc = 0x15D280u;
label_15d280:
    // 0x15d280: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x15d280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_15d284:
    // 0x15d284: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15d284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15d288:
    // 0x15d288: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
label_15d28c:
    if (ctx->pc == 0x15D28Cu) {
        ctx->pc = 0x15D290u;
        goto label_15d290;
    }
    ctx->pc = 0x15D288u;
    {
        const bool branch_taken_0x15d288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15d288) {
            ctx->pc = 0x15D314u;
            goto label_15d314;
        }
    }
    ctx->pc = 0x15D290u;
label_15d290:
    // 0x15d290: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x15d290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_15d294:
    // 0x15d294: 0x17c3001f  bne         $fp, $v1, . + 4 + (0x1F << 2)
label_15d298:
    if (ctx->pc == 0x15D298u) {
        ctx->pc = 0x15D29Cu;
        goto label_15d29c;
    }
    ctx->pc = 0x15D294u;
    {
        const bool branch_taken_0x15d294 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d294) {
            ctx->pc = 0x15D314u;
            goto label_15d314;
        }
    }
    ctx->pc = 0x15D29Cu;
label_15d29c:
    // 0x15d29c: 0x8ea22c1c  lw          $v0, 0x2C1C($s5)
    ctx->pc = 0x15d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15d2a0:
    // 0x15d2a0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_15d2a4:
    // 0x15d2a4: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x15d2a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_15d2a8:
    // 0x15d2a8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x15d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_15d2ac:
    // 0x15d2ac: 0x8443000c  lh          $v1, 0xC($v0)
    ctx->pc = 0x15d2acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_15d2b0:
    // 0x15d2b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15d2b4:
    // 0x15d2b4: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x15d2b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_15d2b8:
    // 0x15d2b8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x15d2b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15d2bc:
    // 0x15d2bc: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x15d2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15d2c0:
    // 0x15d2c0: 0x251082a  slt         $at, $s2, $s1
    ctx->pc = 0x15d2c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15d2c4:
    // 0x15d2c4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_15d2c8:
    if (ctx->pc == 0x15D2C8u) {
        ctx->pc = 0x15D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2C4u;
        // 0x15d2c8: 0x129880  sll         $s3, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2CCu;
        goto label_15d2cc;
    }
    ctx->pc = 0x15D2C4u;
    {
        const bool branch_taken_0x15d2c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2C4u;
        // 0x15d2c8: 0x129880  sll         $s3, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2c4) {
            ctx->pc = 0x15D308u;
            goto label_15d308;
        }
    }
    ctx->pc = 0x15D2CCu;
label_15d2cc:
    // 0x15d2cc: 0x0  nop
    ctx->pc = 0x15d2ccu;
    // NOP
label_15d2d0:
    // 0x15d2d0: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x15d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_15d2d4:
    // 0x15d2d4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15d2d8:
    // 0x15d2d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15d2dc:
    // 0x15d2dc: 0x80420028  lb          $v0, 0x28($v0)
    ctx->pc = 0x15d2dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_15d2e0:
    // 0x15d2e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15d2e4:
    if (ctx->pc == 0x15D2E4u) {
        ctx->pc = 0x15D2E8u;
        goto label_15d2e8;
    }
    ctx->pc = 0x15D2E0u;
    {
        const bool branch_taken_0x15d2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d2e0) {
            ctx->pc = 0x15D2F8u;
            goto label_15d2f8;
        }
    }
    ctx->pc = 0x15D2E8u;
label_15d2e8:
    // 0x15d2e8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d2ec:
    // 0x15d2ec: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x15d2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15d2f0:
    // 0x15d2f0: 0x320f809  jalr        $t9
label_15d2f4:
    if (ctx->pc == 0x15D2F4u) {
        ctx->pc = 0x15D2F8u;
        goto label_15d2f8;
    }
    ctx->pc = 0x15D2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D2F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D2F0u, 0x15D2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D2F8u;
label_15d2f8:
    // 0x15d2f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15d2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15d2fc:
    // 0x15d2fc: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x15d2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15d300:
    // 0x15d300: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_15d304:
    if (ctx->pc == 0x15D304u) {
        ctx->pc = 0x15D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D300u;
        // 0x15d304: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D308u;
        goto label_15d308;
    }
    ctx->pc = 0x15D300u;
    {
        const bool branch_taken_0x15d300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D300u;
        // 0x15d304: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d300) {
            ctx->pc = 0x15D2CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d2cc;
        }
    }
    ctx->pc = 0x15D308u;
label_15d308:
    // 0x15d308: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15d308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15d30c:
    // 0x15d30c: 0xc057620  jal         func_15D880
label_15d310:
    if (ctx->pc == 0x15D310u) {
        ctx->pc = 0x15D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D30Cu;
        // 0x15d310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D314u;
        goto label_15d314;
    }
    ctx->pc = 0x15D30Cu;
    SET_GPR_U32(ctx, 31, 0x15D314u);
    ctx->pc = 0x15D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D30Cu;
    // 0x15d310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D880u, 0x15D30Cu, 0x15D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D314u;
label_15d314:
    // 0x15d314: 0x0  nop
    ctx->pc = 0x15d314u;
    // NOP
label_15d318:
    // 0x15d318: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15d31c:
    // 0x15d31c: 0x217182a  slt         $v1, $s0, $s7
    ctx->pc = 0x15d31cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_15d320:
    // 0x15d320: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_15d324:
    if (ctx->pc == 0x15D324u) {
        ctx->pc = 0x15D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D320u;
        // 0x15d324: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D328u;
        goto label_15d328;
    }
    ctx->pc = 0x15D320u;
    {
        const bool branch_taken_0x15d320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D320u;
        // 0x15d324: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d320) {
            ctx->pc = 0x15D26Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d26c;
        }
    }
    ctx->pc = 0x15D328u;
label_15d328:
    // 0x15d328: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15d328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15d32c:
    // 0x15d32c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15d32cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15d330:
    // 0x15d330: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15d330u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15d334:
    // 0x15d334: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15d334u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15d338:
    // 0x15d338: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15d338u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15d33c:
    // 0x15d33c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15d33cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15d340:
    // 0x15d340: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15d344:
    // 0x15d344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d348:
    // 0x15d348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15d34c:
    // 0x15d34c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15d350:
    // 0x15d350: 0x3e00008  jr          $ra
label_15d354:
    if (ctx->pc == 0x15D354u) {
        ctx->pc = 0x15D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D350u;
        // 0x15d354: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D358u;
        goto label_fallthrough_0x15d350;
    }
    ctx->pc = 0x15D350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D350u;
        // 0x15d354: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d350:
    ctx->pc = 0x15D358u;
}
