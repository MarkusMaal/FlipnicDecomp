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

// Function: FUN_001e61e0
// Address: 0x1e61e0 - 0x1e6390
void FUN_001e61e0_0x1e61e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e61e0_0x1e61e0");
#endif

    switch (ctx->pc) {
        case 0x1e61e0u: goto label_1e61e0;
        case 0x1e61e4u: goto label_1e61e4;
        case 0x1e61e8u: goto label_1e61e8;
        case 0x1e61ecu: goto label_1e61ec;
        case 0x1e61f0u: goto label_1e61f0;
        case 0x1e61f4u: goto label_1e61f4;
        case 0x1e61f8u: goto label_1e61f8;
        case 0x1e61fcu: goto label_1e61fc;
        case 0x1e6200u: goto label_1e6200;
        case 0x1e6204u: goto label_1e6204;
        case 0x1e6208u: goto label_1e6208;
        case 0x1e620cu: goto label_1e620c;
        case 0x1e6210u: goto label_1e6210;
        case 0x1e6214u: goto label_1e6214;
        case 0x1e6218u: goto label_1e6218;
        case 0x1e621cu: goto label_1e621c;
        case 0x1e6220u: goto label_1e6220;
        case 0x1e6224u: goto label_1e6224;
        case 0x1e6228u: goto label_1e6228;
        case 0x1e622cu: goto label_1e622c;
        case 0x1e6230u: goto label_1e6230;
        case 0x1e6234u: goto label_1e6234;
        case 0x1e6238u: goto label_1e6238;
        case 0x1e623cu: goto label_1e623c;
        case 0x1e6240u: goto label_1e6240;
        case 0x1e6244u: goto label_1e6244;
        case 0x1e6248u: goto label_1e6248;
        case 0x1e624cu: goto label_1e624c;
        case 0x1e6250u: goto label_1e6250;
        case 0x1e6254u: goto label_1e6254;
        case 0x1e6258u: goto label_1e6258;
        case 0x1e625cu: goto label_1e625c;
        case 0x1e6260u: goto label_1e6260;
        case 0x1e6264u: goto label_1e6264;
        case 0x1e6268u: goto label_1e6268;
        case 0x1e626cu: goto label_1e626c;
        case 0x1e6270u: goto label_1e6270;
        case 0x1e6274u: goto label_1e6274;
        case 0x1e6278u: goto label_1e6278;
        case 0x1e627cu: goto label_1e627c;
        case 0x1e6280u: goto label_1e6280;
        case 0x1e6284u: goto label_1e6284;
        case 0x1e6288u: goto label_1e6288;
        case 0x1e628cu: goto label_1e628c;
        case 0x1e6290u: goto label_1e6290;
        case 0x1e6294u: goto label_1e6294;
        case 0x1e6298u: goto label_1e6298;
        case 0x1e629cu: goto label_1e629c;
        case 0x1e62a0u: goto label_1e62a0;
        case 0x1e62a4u: goto label_1e62a4;
        case 0x1e62a8u: goto label_1e62a8;
        case 0x1e62acu: goto label_1e62ac;
        case 0x1e62b0u: goto label_1e62b0;
        case 0x1e62b4u: goto label_1e62b4;
        case 0x1e62b8u: goto label_1e62b8;
        case 0x1e62bcu: goto label_1e62bc;
        case 0x1e62c0u: goto label_1e62c0;
        case 0x1e62c4u: goto label_1e62c4;
        case 0x1e62c8u: goto label_1e62c8;
        case 0x1e62ccu: goto label_1e62cc;
        case 0x1e62d0u: goto label_1e62d0;
        case 0x1e62d4u: goto label_1e62d4;
        case 0x1e62d8u: goto label_1e62d8;
        case 0x1e62dcu: goto label_1e62dc;
        case 0x1e62e0u: goto label_1e62e0;
        case 0x1e62e4u: goto label_1e62e4;
        case 0x1e62e8u: goto label_1e62e8;
        case 0x1e62ecu: goto label_1e62ec;
        case 0x1e62f0u: goto label_1e62f0;
        case 0x1e62f4u: goto label_1e62f4;
        case 0x1e62f8u: goto label_1e62f8;
        case 0x1e62fcu: goto label_1e62fc;
        case 0x1e6300u: goto label_1e6300;
        case 0x1e6304u: goto label_1e6304;
        case 0x1e6308u: goto label_1e6308;
        case 0x1e630cu: goto label_1e630c;
        case 0x1e6310u: goto label_1e6310;
        case 0x1e6314u: goto label_1e6314;
        case 0x1e6318u: goto label_1e6318;
        case 0x1e631cu: goto label_1e631c;
        case 0x1e6320u: goto label_1e6320;
        case 0x1e6324u: goto label_1e6324;
        case 0x1e6328u: goto label_1e6328;
        case 0x1e632cu: goto label_1e632c;
        case 0x1e6330u: goto label_1e6330;
        case 0x1e6334u: goto label_1e6334;
        case 0x1e6338u: goto label_1e6338;
        case 0x1e633cu: goto label_1e633c;
        case 0x1e6340u: goto label_1e6340;
        case 0x1e6344u: goto label_1e6344;
        case 0x1e6348u: goto label_1e6348;
        case 0x1e634cu: goto label_1e634c;
        case 0x1e6350u: goto label_1e6350;
        case 0x1e6354u: goto label_1e6354;
        case 0x1e6358u: goto label_1e6358;
        case 0x1e635cu: goto label_1e635c;
        case 0x1e6360u: goto label_1e6360;
        case 0x1e6364u: goto label_1e6364;
        case 0x1e6368u: goto label_1e6368;
        case 0x1e636cu: goto label_1e636c;
        case 0x1e6370u: goto label_1e6370;
        case 0x1e6374u: goto label_1e6374;
        case 0x1e6378u: goto label_1e6378;
        case 0x1e637cu: goto label_1e637c;
        case 0x1e6380u: goto label_1e6380;
        case 0x1e6384u: goto label_1e6384;
        case 0x1e6388u: goto label_1e6388;
        case 0x1e638cu: goto label_1e638c;
        default: break;
    }

    ctx->pc = 0x1e61e0u;

label_1e61e0:
    // 0x1e61e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e61e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e61e4:
    // 0x1e61e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e61e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e61e8:
    // 0x1e61e8: 0x27a2007e  addiu       $v0, $sp, 0x7E
    ctx->pc = 0x1e61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
label_1e61ec:
    // 0x1e61ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e61ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e61f0:
    // 0x1e61f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e61f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e61f4:
    // 0x1e61f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e61f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e61f8:
    // 0x1e61f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e61f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e61fc:
    // 0x1e61fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e61fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6200:
    // 0x1e6200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e6204:
    // 0x1e6204: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6208:
    // 0x1e6208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e6208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e620c:
    // 0x1e620c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1e620cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1e6210:
    // 0x1e6210: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1e6214:
    if (ctx->pc == 0x1E6214u) {
        ctx->pc = 0x1E6214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6210u;
        // 0x1e6214: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6218u;
        goto label_1e6218;
    }
    ctx->pc = 0x1E6210u;
    {
        const bool branch_taken_0x1e6210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6210u;
        // 0x1e6214: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6210) {
            ctx->pc = 0x1E630Cu;
            goto label_1e630c;
        }
    }
    ctx->pc = 0x1E6218u;
label_1e6218:
    // 0x1e6218: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1e621c:
    if (ctx->pc == 0x1E621Cu) {
        ctx->pc = 0x1E621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6218u;
        // 0x1e621c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6220u;
        goto label_1e6220;
    }
    ctx->pc = 0x1E6218u;
    {
        const bool branch_taken_0x1e6218 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6218u;
        // 0x1e621c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6218) {
            ctx->pc = 0x1E6228u;
            goto label_1e6228;
        }
    }
    ctx->pc = 0x1E6220u;
label_1e6220:
    // 0x1e6220: 0x10000054  b           . + 4 + (0x54 << 2)
label_1e6224:
    if (ctx->pc == 0x1E6224u) {
        ctx->pc = 0x1E6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6220u;
        // 0x1e6224: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6228u;
        goto label_1e6228;
    }
    ctx->pc = 0x1E6220u;
    {
        const bool branch_taken_0x1e6220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6220u;
        // 0x1e6224: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6220) {
            ctx->pc = 0x1E6374u;
            goto label_1e6374;
        }
    }
    ctx->pc = 0x1E6228u;
label_1e6228:
    // 0x1e6228: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1e6228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1e622c:
    // 0x1e622c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e6230:
    // 0x1e6230: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e6230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e6234:
    // 0x1e6234: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_1e6238:
    if (ctx->pc == 0x1E6238u) {
        ctx->pc = 0x1E6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6234u;
        // 0x1e6238: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E623Cu;
        goto label_1e623c;
    }
    ctx->pc = 0x1E6234u;
    {
        const bool branch_taken_0x1e6234 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6234u;
        // 0x1e6238: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6234) {
            ctx->pc = 0x1E624Cu;
            goto label_1e624c;
        }
    }
    ctx->pc = 0x1E623Cu;
label_1e623c:
    // 0x1e623c: 0xc080490  jal         func_201240
label_1e6240:
    if (ctx->pc == 0x1E6240u) {
        ctx->pc = 0x1E6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E623Cu;
        // 0x1e6240: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6244u;
        goto label_1e6244;
    }
    ctx->pc = 0x1E623Cu;
    SET_GPR_U32(ctx, 31, 0x1E6244u);
    ctx->pc = 0x1E6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E623Cu;
    // 0x1e6240: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201240u, 0x1E623Cu, 0x1E6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6244u;
label_1e6244:
    // 0x1e6244: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e6248:
    if (ctx->pc == 0x1E6248u) {
        ctx->pc = 0x1E6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6244u;
        // 0x1e6248: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E624Cu;
        goto label_1e624c;
    }
    ctx->pc = 0x1E6244u;
    {
        const bool branch_taken_0x1e6244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6244u;
        // 0x1e6248: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6244) {
            ctx->pc = 0x1E6268u;
            goto label_1e6268;
        }
    }
    ctx->pc = 0x1E624Cu;
label_1e624c:
    // 0x1e624c: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1e624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1e6250:
    // 0x1e6250: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e6250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6254:
    // 0x1e6254: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e6254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e6258:
    // 0x1e6258: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e625c:
    // 0x1e625c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e625cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e6260:
    // 0x1e6260: 0x0  nop
    ctx->pc = 0x1e6260u;
    // NOP
label_1e6264:
    // 0x1e6264: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e6264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e6268:
    // 0x1e6268: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e626c:
    if (ctx->pc == 0x1E626Cu) {
        ctx->pc = 0x1E626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6268u;
        // 0x1e626c: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6270u;
        goto label_1e6270;
    }
    ctx->pc = 0x1E6268u;
    {
        const bool branch_taken_0x1e6268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6268u;
        // 0x1e626c: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6268) {
            ctx->pc = 0x1E6278u;
            goto label_1e6278;
        }
    }
    ctx->pc = 0x1E6270u;
label_1e6270:
    // 0x1e6270: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1e6274:
    if (ctx->pc == 0x1E6274u) {
        ctx->pc = 0x1E6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6270u;
        // 0x1e6274: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6278u;
        goto label_1e6278;
    }
    ctx->pc = 0x1E6270u;
    {
        const bool branch_taken_0x1e6270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6270u;
        // 0x1e6274: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6270) {
            ctx->pc = 0x1E6370u;
            goto label_1e6370;
        }
    }
    ctx->pc = 0x1E6278u;
label_1e6278:
    // 0x1e6278: 0x26850028  addiu       $a1, $s4, 0x28
    ctx->pc = 0x1e6278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_1e627c:
    // 0x1e627c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1e627cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1e6280:
    // 0x1e6280: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x1e6280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1e6284:
    // 0x1e6284: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e6284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e6288:
    // 0x1e6288: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e6288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e628c:
    // 0x1e628c: 0x913821  addu        $a3, $a0, $s1
    ctx->pc = 0x1e628cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1e6290:
    // 0x1e6290: 0x27a80074  addiu       $t0, $sp, 0x74
    ctx->pc = 0x1e6290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1e6294:
    // 0x1e6294: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x1e6294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_1e6298:
    // 0x1e6298: 0x27a9007e  addiu       $t1, $sp, 0x7E
    ctx->pc = 0x1e6298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
label_1e629c:
    // 0x1e629c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1e629cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e62a0:
    // 0x1e62a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e62a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e62a4:
    // 0x1e62a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e62a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e62a8:
    // 0x1e62a8: 0x320f809  jalr        $t9
label_1e62ac:
    if (ctx->pc == 0x1E62ACu) {
        ctx->pc = 0x1E62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A8u;
        // 0x1e62ac: 0x27ab0078  addiu       $t3, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62B0u;
        goto label_1e62b0;
    }
    ctx->pc = 0x1E62A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E62B0u);
        ctx->pc = 0x1E62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A8u;
        // 0x1e62ac: 0x27ab0078  addiu       $t3, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E62A8u, 0x1E62B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E62B0u;
label_1e62b0:
    // 0x1e62b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e62b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e62b4:
    // 0x1e62b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e62b8:
    // 0x1e62b8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1e62bc:
    if (ctx->pc == 0x1E62BCu) {
        ctx->pc = 0x1E62C0u;
        goto label_1e62c0;
    }
    ctx->pc = 0x1E62B8u;
    {
        const bool branch_taken_0x1e62b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e62b8) {
            ctx->pc = 0x1E6300u;
            goto label_1e6300;
        }
    }
    ctx->pc = 0x1E62C0u;
label_1e62c0:
    // 0x1e62c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e62c4:
    // 0x1e62c4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1e62c8:
    if (ctx->pc == 0x1E62C8u) {
        ctx->pc = 0x1E62CCu;
        goto label_1e62cc;
    }
    ctx->pc = 0x1E62C4u;
    {
        const bool branch_taken_0x1e62c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e62c4) {
            ctx->pc = 0x1E62F0u;
            goto label_1e62f0;
        }
    }
    ctx->pc = 0x1E62CCu;
label_1e62cc:
    // 0x1e62cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1e62d0:
    if (ctx->pc == 0x1E62D0u) {
        ctx->pc = 0x1E62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62CCu;
        // 0x1e62d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62D4u;
        goto label_1e62d4;
    }
    ctx->pc = 0x1E62CCu;
    {
        const bool branch_taken_0x1e62cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62CCu;
        // 0x1e62d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62cc) {
            ctx->pc = 0x1E62F0u;
            goto label_1e62f0;
        }
    }
    ctx->pc = 0x1E62D4u;
label_1e62d4:
    // 0x1e62d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e62d8:
    if (ctx->pc == 0x1E62D8u) {
        ctx->pc = 0x1E62DCu;
        goto label_1e62dc;
    }
    ctx->pc = 0x1E62D4u;
    {
        const bool branch_taken_0x1e62d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e62d4) {
            ctx->pc = 0x1E62E4u;
            goto label_1e62e4;
        }
    }
    ctx->pc = 0x1E62DCu;
label_1e62dc:
    // 0x1e62dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e62e0:
    if (ctx->pc == 0x1E62E0u) {
        ctx->pc = 0x1E62E4u;
        goto label_1e62e4;
    }
    ctx->pc = 0x1E62DCu;
    {
        const bool branch_taken_0x1e62dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e62dc) {
            ctx->pc = 0x1E630Cu;
            goto label_1e630c;
        }
    }
    ctx->pc = 0x1E62E4u;
label_1e62e4:
    // 0x1e62e4: 0x0  nop
    ctx->pc = 0x1e62e4u;
    // NOP
label_1e62e8:
    // 0x1e62e8: 0x10000021  b           . + 4 + (0x21 << 2)
label_1e62ec:
    if (ctx->pc == 0x1E62ECu) {
        ctx->pc = 0x1E62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62E8u;
        // 0x1e62ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62F0u;
        goto label_1e62f0;
    }
    ctx->pc = 0x1E62E8u;
    {
        const bool branch_taken_0x1e62e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62E8u;
        // 0x1e62ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62e8) {
            ctx->pc = 0x1E6370u;
            goto label_1e6370;
        }
    }
    ctx->pc = 0x1E62F0u;
label_1e62f0:
    // 0x1e62f0: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x1e62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1e62f4:
    // 0x1e62f4: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1e62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1e62f8:
    // 0x1e62f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e62fc:
    if (ctx->pc == 0x1E62FCu) {
        ctx->pc = 0x1E62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62F8u;
        // 0x1e62fc: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6300u;
        goto label_1e6300;
    }
    ctx->pc = 0x1E62F8u;
    {
        const bool branch_taken_0x1e62f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62F8u;
        // 0x1e62fc: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62f8) {
            ctx->pc = 0x1E630Cu;
            goto label_1e630c;
        }
    }
    ctx->pc = 0x1E6300u;
label_1e6300:
    // 0x1e6300: 0x97a20068  lhu         $v0, 0x68($sp)
    ctx->pc = 0x1e6300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
label_1e6304:
    // 0x1e6304: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x1e6304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
label_1e6308:
    // 0x1e6308: 0xa7a2007e  sh          $v0, 0x7E($sp)
    ctx->pc = 0x1e6308u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 2));
label_1e630c:
    // 0x1e630c: 0x0  nop
    ctx->pc = 0x1e630cu;
    // NOP
label_1e6310:
    // 0x1e6310: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e6310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e6314:
    // 0x1e6314: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x1e6314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e6318:
    // 0x1e6318: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1e6318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1e631c:
    // 0x1e631c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1e6320:
    if (ctx->pc == 0x1E6320u) {
        ctx->pc = 0x1E6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E631Cu;
        // 0x1e6320: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6324u;
        goto label_1e6324;
    }
    ctx->pc = 0x1E631Cu;
    {
        const bool branch_taken_0x1e631c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E631Cu;
        // 0x1e6320: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e631c) {
            ctx->pc = 0x1E6218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6218;
        }
    }
    ctx->pc = 0x1E6324u;
label_1e6324:
    // 0x1e6324: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_1e6328:
    if (ctx->pc == 0x1E6328u) {
        ctx->pc = 0x1E632Cu;
        goto label_1e632c;
    }
    ctx->pc = 0x1E6324u;
    {
        const bool branch_taken_0x1e6324 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6324) {
            ctx->pc = 0x1E6368u;
            goto label_1e6368;
        }
    }
    ctx->pc = 0x1E632Cu;
label_1e632c:
    // 0x1e632c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_1e6330:
    if (ctx->pc == 0x1E6330u) {
        ctx->pc = 0x1E6334u;
        goto label_1e6334;
    }
    ctx->pc = 0x1E632Cu;
    {
        const bool branch_taken_0x1e632c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e632c) {
            ctx->pc = 0x1E6368u;
            goto label_1e6368;
        }
    }
    ctx->pc = 0x1E6334u;
label_1e6334:
    // 0x1e6334: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e6334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1e6338:
    // 0x1e6338: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1e6338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1e633c:
    // 0x1e633c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e6340:
    // 0x1e6340: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1e6340u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6344:
    // 0x1e6344: 0xc080dea  jal         func_2037A8
label_1e6348:
    if (ctx->pc == 0x1E6348u) {
        ctx->pc = 0x1E6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6344u;
        // 0x1e6348: 0x8e850024  lw          $a1, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E634Cu;
        goto label_1e634c;
    }
    ctx->pc = 0x1E6344u;
    SET_GPR_U32(ctx, 31, 0x1E634Cu);
    ctx->pc = 0x1E6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6344u;
    // 0x1e6348: 0x8e850024  lw          $a1, 0x24($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E6344u, 0x1E634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E634Cu;
label_1e634c:
    // 0x1e634c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e634cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e6350:
    // 0x1e6350: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e6354:
    if (ctx->pc == 0x1E6354u) {
        ctx->pc = 0x1E6358u;
        goto label_1e6358;
    }
    ctx->pc = 0x1E6350u;
    {
        const bool branch_taken_0x1e6350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e6350) {
            ctx->pc = 0x1E6360u;
            goto label_1e6360;
        }
    }
    ctx->pc = 0x1E6358u;
label_1e6358:
    // 0x1e6358: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e635c:
    if (ctx->pc == 0x1E635Cu) {
        ctx->pc = 0x1E635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6358u;
        // 0x1e635c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6360u;
        goto label_1e6360;
    }
    ctx->pc = 0x1E6358u;
    {
        const bool branch_taken_0x1e6358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6358u;
        // 0x1e635c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6358) {
            ctx->pc = 0x1E6370u;
            goto label_1e6370;
        }
    }
    ctx->pc = 0x1E6360u;
label_1e6360:
    // 0x1e6360: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_1e6364:
    if (ctx->pc == 0x1E6364u) {
        ctx->pc = 0x1E6368u;
        goto label_1e6368;
    }
    ctx->pc = 0x1E6360u;
    {
        const bool branch_taken_0x1e6360 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6360) {
            ctx->pc = 0x1E6334u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6334;
        }
    }
    ctx->pc = 0x1E6368u;
label_1e6368:
    // 0x1e6368: 0x97a2007e  lhu         $v0, 0x7E($sp)
    ctx->pc = 0x1e6368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
label_1e636c:
    // 0x1e636c: 0x0  nop
    ctx->pc = 0x1e636cu;
    // NOP
label_1e6370:
    // 0x1e6370: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e6370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e6374:
    // 0x1e6374: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e6374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e6378:
    // 0x1e6378: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e6378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e637c:
    // 0x1e637c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e637cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6380:
    // 0x1e6380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6384:
    // 0x1e6384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6388:
    // 0x1e6388: 0x3e00008  jr          $ra
label_1e638c:
    if (ctx->pc == 0x1E638Cu) {
        ctx->pc = 0x1E638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6388u;
        // 0x1e638c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6390u;
        goto label_fallthrough_0x1e6388;
    }
    ctx->pc = 0x1E6388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6388u;
        // 0x1e638c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e6388:
    ctx->pc = 0x1E6390u;
}
