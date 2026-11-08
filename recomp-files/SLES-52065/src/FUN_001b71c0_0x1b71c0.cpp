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

// Function: FUN_001b71c0
// Address: 0x1b71c0 - 0x1b748c
void FUN_001b71c0_0x1b71c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b71c0_0x1b71c0");
#endif

    switch (ctx->pc) {
        case 0x1b7210u: goto label_1b7210;
        case 0x1b7270u: goto label_1b7270;
        case 0x1b7284u: goto label_1b7284;
        case 0x1b7294u: goto label_1b7294;
        case 0x1b72e8u: goto label_1b72e8;
        case 0x1b7304u: goto label_1b7304;
        case 0x1b73bcu: goto label_1b73bc;
        case 0x1b73dcu: goto label_1b73dc;
        case 0x1b73fcu: goto label_1b73fc;
        case 0x1b7408u: goto label_1b7408;
        case 0x1b7414u: goto label_1b7414;
        case 0x1b7430u: goto label_1b7430;
        case 0x1b7438u: goto label_1b7438;
        case 0x1b7444u: goto label_1b7444;
        case 0x1b7450u: goto label_1b7450;
        default: break;
    }

    ctx->pc = 0x1b71c0u;

    // 0x1b71c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b71c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b71c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b71c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b71c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b71c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b71cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b71ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b71d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b71d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b71d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b71d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b71d8: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1b71d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b71dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b71e0: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x1b71e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x1b71e4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1b71e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1b71e8: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B71E8u;
    {
        const bool branch_taken_0x1b71e8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71E8u;
        // 0x1b71ec: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71e8) {
            ctx->pc = 0x1B7210u;
            goto label_1b7210;
        }
    }
    ctx->pc = 0x1B71F0u;
    // 0x1b71f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b71f4: 0xae630048  sw          $v1, 0x48($s3)
    ctx->pc = 0x1b71f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 3));
    // 0x1b71f8: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x1b71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1b71fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B71FCu;
    {
        const bool branch_taken_0x1b71fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b71fc) {
            ctx->pc = 0x1B7210u;
            goto label_1b7210;
        }
    }
    ctx->pc = 0x1B7204u;
    // 0x1b7204: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x1b7204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1b7208: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1B7208u;
    SET_GPR_U32(ctx, 31, 0x1B7210u);
    ctx->pc = 0x1B720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7208u;
    // 0x1b720c: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1B7208u, 0x1B7210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7210u;
label_1b7210:
    // 0x1b7210: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x1b7210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1b7214: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B7214u;
    {
        const bool branch_taken_0x1b7214 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b7214) {
            ctx->pc = 0x1B72A8u;
            goto label_1b72a8;
        }
    }
    ctx->pc = 0x1B721Cu;
    // 0x1b721c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b721cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b7220: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x1b7220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x1b7224: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x1b7224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1b7228: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B7228u;
    {
        const bool branch_taken_0x1b7228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7228) {
            ctx->pc = 0x1B72A8u;
            goto label_1b72a8;
        }
    }
    ctx->pc = 0x1B7230u;
    // 0x1b7230: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x1b7230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1b7234: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b7234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b7238: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7238u;
    {
        const bool branch_taken_0x1b7238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7238u;
        // 0x1b723c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7238) {
            ctx->pc = 0x1B729Cu;
            goto label_1b729c;
        }
    }
    ctx->pc = 0x1B7240u;
    // 0x1b7240: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B7240u;
    {
        const bool branch_taken_0x1b7240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7240) {
            ctx->pc = 0x1B728Cu;
            goto label_1b728c;
        }
    }
    ctx->pc = 0x1B7248u;
    // 0x1b7248: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b7248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b724c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B724Cu;
    {
        const bool branch_taken_0x1b724c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B724Cu;
        // 0x1b7250: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b724c) {
            ctx->pc = 0x1B7278u;
            goto label_1b7278;
        }
    }
    ctx->pc = 0x1B7254u;
    // 0x1b7254: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7254u;
    {
        const bool branch_taken_0x1b7254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7254) {
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B725Cu;
    // 0x1b725c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B725Cu;
    {
        const bool branch_taken_0x1b725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B725Cu;
        // 0x1b7260: 0x8e63005c  lw          $v1, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b725c) {
            ctx->pc = 0x1B72ACu;
            goto label_1b72ac;
        }
    }
    ctx->pc = 0x1B7264u;
label_1b7264:
    // 0x1b7264: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x1b7264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1b7268: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1B7268u;
    SET_GPR_U32(ctx, 31, 0x1B7270u);
    ctx->pc = 0x1B726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7268u;
    // 0x1b726c: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1B7268u, 0x1B7270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7270u;
label_1b7270:
    // 0x1b7270: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B7270u;
    {
        const bool branch_taken_0x1b7270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7270) {
            ctx->pc = 0x1B72A8u;
            goto label_1b72a8;
        }
    }
    ctx->pc = 0x1B7278u;
label_1b7278:
    // 0x1b7278: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x1b7278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1b727c: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1B727Cu;
    SET_GPR_U32(ctx, 31, 0x1B7284u);
    ctx->pc = 0x1B7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B727Cu;
    // 0x1b7280: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1B727Cu, 0x1B7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7284u;
label_1b7284:
    // 0x1b7284: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7284u;
    {
        const bool branch_taken_0x1b7284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7284) {
            ctx->pc = 0x1B72A8u;
            goto label_1b72a8;
        }
    }
    ctx->pc = 0x1B728Cu;
label_1b728c:
    // 0x1b728c: 0xc06d8c4  jal         func_1B6310
    ctx->pc = 0x1B728Cu;
    SET_GPR_U32(ctx, 31, 0x1B7294u);
    ctx->pc = 0x1B7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B728Cu;
    // 0x1b7290: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6310u, 0x1B728Cu, 0x1B7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7294u;
label_1b7294:
    // 0x1b7294: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7294u;
    {
        const bool branch_taken_0x1b7294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7294) {
            ctx->pc = 0x1B72A8u;
            goto label_1b72a8;
        }
    }
    ctx->pc = 0x1B729Cu;
label_1b729c:
    // 0x1b729c: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1b729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1b72a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b72a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b72a4: 0xa0640034  sb          $a0, 0x34($v1)
    ctx->pc = 0x1b72a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 52), (uint8_t)GPR_U32(ctx, 4));
label_1b72a8:
    // 0x1b72a8: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x1b72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_1b72ac:
    // 0x1b72ac: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B72ACu;
    {
        const bool branch_taken_0x1b72ac = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b72ac) {
            ctx->pc = 0x1B72D0u;
            goto label_1b72d0;
        }
    }
    ctx->pc = 0x1B72B4u;
    // 0x1b72b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b72b8: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x1b72b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
    // 0x1b72bc: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x1b72bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x1b72c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B72C0u;
    {
        const bool branch_taken_0x1b72c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b72c0) {
            ctx->pc = 0x1B72D0u;
            goto label_1b72d0;
        }
    }
    ctx->pc = 0x1B72C8u;
    // 0x1b72c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b72c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b72cc: 0xa2630041  sb          $v1, 0x41($s3)
    ctx->pc = 0x1b72ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 65), (uint8_t)GPR_U32(ctx, 3));
label_1b72d0:
    // 0x1b72d0: 0x92640040  lbu         $a0, 0x40($s3)
    ctx->pc = 0x1b72d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1b72d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b72d8: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B72D8u;
    {
        const bool branch_taken_0x1b72d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b72d8) {
            ctx->pc = 0x1B73C4u;
            goto label_1b73c4;
        }
    }
    ctx->pc = 0x1B72E0u;
    // 0x1b72e0: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1B72E0u;
    SET_GPR_U32(ctx, 31, 0x1B72E8u);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1B72E0u, 0x1B72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B72E8u;
label_1b72e8:
    // 0x1b72e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b72e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b72ec: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B72ECu;
    {
        const bool branch_taken_0x1b72ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b72ec) {
            ctx->pc = 0x1B73C4u;
            goto label_1b73c4;
        }
    }
    ctx->pc = 0x1B72F4u;
    // 0x1b72f4: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x1b72f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1b72f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b72f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b72fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7300: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7304:
    // 0x1b7304: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1b7304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b7308: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1b7308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b730c: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B730Cu;
    {
        const bool branch_taken_0x1b730c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B730Cu;
        // 0x1b7310: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b730c) {
            ctx->pc = 0x1B7318u;
            goto label_1b7318;
        }
    }
    ctx->pc = 0x1B7314u;
    // 0x1b7314: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b7314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7318:
    // 0x1b7318: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7318u;
    {
        const bool branch_taken_0x1b7318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7318) {
            ctx->pc = 0x1B7328u;
            goto label_1b7328;
        }
    }
    ctx->pc = 0x1B7320u;
    // 0x1b7320: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7320u;
    {
        const bool branch_taken_0x1b7320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7320u;
        // 0x1b7324: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7320) {
            ctx->pc = 0x1B733Cu;
            goto label_1b733c;
        }
    }
    ctx->pc = 0x1B7328u;
label_1b7328:
    // 0x1b7328: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b7328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b732c: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x1b732cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b7330: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B7330u;
    {
        const bool branch_taken_0x1b7330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7330u;
        // 0x1b7334: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7330) {
            ctx->pc = 0x1B7304u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7304;
        }
    }
    ctx->pc = 0x1B7338u;
    // 0x1b7338: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b7338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b733c:
    // 0x1b733c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B733Cu;
    {
        const bool branch_taken_0x1b733c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b733c) {
            ctx->pc = 0x1B7348u;
            goto label_1b7348;
        }
    }
    ctx->pc = 0x1B7344u;
    // 0x1b7344: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x1b7344u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
label_1b7348:
    // 0x1b7348: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x1b7348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1b734c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1b734cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1b7350: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b7350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7354: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b7354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b7358: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b7358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b735c: 0xae63003c  sw          $v1, 0x3C($s3)
    ctx->pc = 0x1b735cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
    // 0x1b7360: 0xc420c394  lwc1        $f0, -0x3C6C($at)
    ctx->pc = 0x1b7360u;
    { uint32_t bits = FAST_READ32(0x22C394u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7364: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7368: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b736c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b736cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b7370: 0x0  nop
    ctx->pc = 0x1b7370u;
    // NOP
    // 0x1b7374: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7374u;
    {
        const bool branch_taken_0x1b7374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7374) {
            ctx->pc = 0x1B7380u;
            goto label_1b7380;
        }
    }
    ctx->pc = 0x1B737Cu;
    // 0x1b737c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b737cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b7380:
    // 0x1b7380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7384: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x1b7384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1b7388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b738c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x1b738cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x1b7390: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b7390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7394: 0x0  nop
    ctx->pc = 0x1b7394u;
    // NOP
    // 0x1b7398: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b739c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b739cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b73a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b73a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b73a4: 0x0  nop
    ctx->pc = 0x1b73a4u;
    // NOP
    // 0x1b73a8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b73a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b73ac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B73ACu;
    {
        const bool branch_taken_0x1b73ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b73ac) {
            ctx->pc = 0x1B73C8u;
            goto label_1b73c8;
        }
    }
    ctx->pc = 0x1B73B4u;
    // 0x1b73b4: 0xc06d8f4  jal         func_1B63D0
    ctx->pc = 0x1B73B4u;
    SET_GPR_U32(ctx, 31, 0x1B73BCu);
    ctx->pc = 0x1B73B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B73B4u;
    // 0x1b73b8: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B63D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B63D0u, 0x1B73B4u, 0x1B73BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73BCu;
label_1b73bc:
    // 0x1b73bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B73BCu;
    {
        const bool branch_taken_0x1b73bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73BCu;
        // 0x1b73c0: 0x8e710034  lw          $s1, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73bc) {
            ctx->pc = 0x1B73CCu;
            goto label_1b73cc;
        }
    }
    ctx->pc = 0x1B73C4u;
label_1b73c4:
    // 0x1b73c4: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x1b73c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
label_1b73c8:
    // 0x1b73c8: 0x8e710034  lw          $s1, 0x34($s3)
    ctx->pc = 0x1b73c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1b73cc:
    // 0x1b73cc: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1b73ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b73d0: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B73D0u;
    {
        const bool branch_taken_0x1b73d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73D0u;
        // 0x1b73d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73d0) {
            ctx->pc = 0x1B7470u;
            goto label_1b7470;
        }
    }
    ctx->pc = 0x1B73D8u;
    // 0x1b73d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b73d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b73dc:
    // 0x1b73dc: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x1b73dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1b73e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1b73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b73e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b73e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b73e8: 0x90630014  lbu         $v1, 0x14($v1)
    ctx->pc = 0x1b73e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1b73ec: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B73ECu;
    {
        const bool branch_taken_0x1b73ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73ECu;
        // 0x1b73f0: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73ec) {
            ctx->pc = 0x1B745Cu;
            goto label_1b745c;
        }
    }
    ctx->pc = 0x1B73F4u;
    // 0x1b73f4: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1B73F4u;
    SET_GPR_U32(ctx, 31, 0x1B73FCu);
    ctx->pc = 0x1B73F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B73F4u;
    // 0x1b73f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1B73F4u, 0x1B73FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73FCu;
label_1b73fc:
    // 0x1b73fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7400: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B7400u;
    SET_GPR_U32(ctx, 31, 0x1B7408u);
    ctx->pc = 0x1B7404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7400u;
    // 0x1b7404: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B7400u, 0x1B7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7408u;
label_1b7408:
    // 0x1b7408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b740c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B740Cu;
    {
        const bool branch_taken_0x1b740c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B740Cu;
        // 0x1b7410: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b740c) {
            ctx->pc = 0x1B7438u;
            goto label_1b7438;
        }
    }
    ctx->pc = 0x1B7414u;
label_1b7414:
    // 0x1b7414: 0x0  nop
    ctx->pc = 0x1b7414u;
    // NOP
    // 0x1b7418: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1b7418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b741c: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x1b741cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b7420: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7420u;
    {
        const bool branch_taken_0x1b7420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7420) {
            ctx->pc = 0x1B7430u;
            goto label_1b7430;
        }
    }
    ctx->pc = 0x1B7428u;
    // 0x1b7428: 0xc06f8f4  jal         func_1BE3D0
    ctx->pc = 0x1B7428u;
    SET_GPR_U32(ctx, 31, 0x1B7430u);
    ctx->pc = 0x1B742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7428u;
    // 0x1b742c: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D0u, 0x1B7428u, 0x1B7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7430u;
label_1b7430:
    // 0x1b7430: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7430u;
    SET_GPR_U32(ctx, 31, 0x1B7438u);
    ctx->pc = 0x1B7434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7430u;
    // 0x1b7434: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7430u, 0x1B7438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7438u;
label_1b7438:
    // 0x1b7438: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1b7438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1b743c: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1B743Cu;
    SET_GPR_U32(ctx, 31, 0x1B7444u);
    ctx->pc = 0x1B7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B743Cu;
    // 0x1b7440: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1B743Cu, 0x1B7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7444u;
label_1b7444:
    // 0x1b7444: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7448: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7448u;
    SET_GPR_U32(ctx, 31, 0x1B7450u);
    ctx->pc = 0x1B744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7448u;
    // 0x1b744c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7448u, 0x1B7450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7450u;
label_1b7450:
    // 0x1b7450: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1b7454: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B7454u;
    {
        const bool branch_taken_0x1b7454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7454) {
            ctx->pc = 0x1B7414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7414;
        }
    }
    ctx->pc = 0x1B745Cu;
label_1b745c:
    // 0x1b745c: 0x0  nop
    ctx->pc = 0x1b745cu;
    // NOP
    // 0x1b7460: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b7464: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1b7464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b7468: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1B7468u;
    {
        const bool branch_taken_0x1b7468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7468u;
        // 0x1b746c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7468) {
            ctx->pc = 0x1B73DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b73dc;
        }
    }
    ctx->pc = 0x1B7470u;
label_1b7470:
    // 0x1b7470: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b7470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7474: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b7474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b747c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b747cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7484: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7484u;
        // 0x1b7488: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B748Cu;
}
