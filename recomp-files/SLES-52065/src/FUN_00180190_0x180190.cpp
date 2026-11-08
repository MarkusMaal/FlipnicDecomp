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

// Function: FUN_00180190
// Address: 0x180190 - 0x180324
void FUN_00180190_0x180190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180190_0x180190");
#endif

    switch (ctx->pc) {
        case 0x180190u: goto label_180190;
        case 0x180194u: goto label_180194;
        case 0x180198u: goto label_180198;
        case 0x18019cu: goto label_18019c;
        case 0x1801a0u: goto label_1801a0;
        case 0x1801a4u: goto label_1801a4;
        case 0x1801a8u: goto label_1801a8;
        case 0x1801acu: goto label_1801ac;
        case 0x1801b0u: goto label_1801b0;
        case 0x1801b4u: goto label_1801b4;
        case 0x1801b8u: goto label_1801b8;
        case 0x1801bcu: goto label_1801bc;
        case 0x1801c0u: goto label_1801c0;
        case 0x1801c4u: goto label_1801c4;
        case 0x1801c8u: goto label_1801c8;
        case 0x1801ccu: goto label_1801cc;
        case 0x1801d0u: goto label_1801d0;
        case 0x1801d4u: goto label_1801d4;
        case 0x1801d8u: goto label_1801d8;
        case 0x1801dcu: goto label_1801dc;
        case 0x1801e0u: goto label_1801e0;
        case 0x1801e4u: goto label_1801e4;
        case 0x1801e8u: goto label_1801e8;
        case 0x1801ecu: goto label_1801ec;
        case 0x1801f0u: goto label_1801f0;
        case 0x1801f4u: goto label_1801f4;
        case 0x1801f8u: goto label_1801f8;
        case 0x1801fcu: goto label_1801fc;
        case 0x180200u: goto label_180200;
        case 0x180204u: goto label_180204;
        case 0x180208u: goto label_180208;
        case 0x18020cu: goto label_18020c;
        case 0x180210u: goto label_180210;
        case 0x180214u: goto label_180214;
        case 0x180218u: goto label_180218;
        case 0x18021cu: goto label_18021c;
        case 0x180220u: goto label_180220;
        case 0x180224u: goto label_180224;
        case 0x180228u: goto label_180228;
        case 0x18022cu: goto label_18022c;
        case 0x180230u: goto label_180230;
        case 0x180234u: goto label_180234;
        case 0x180238u: goto label_180238;
        case 0x18023cu: goto label_18023c;
        case 0x180240u: goto label_180240;
        case 0x180244u: goto label_180244;
        case 0x180248u: goto label_180248;
        case 0x18024cu: goto label_18024c;
        case 0x180250u: goto label_180250;
        case 0x180254u: goto label_180254;
        case 0x180258u: goto label_180258;
        case 0x18025cu: goto label_18025c;
        case 0x180260u: goto label_180260;
        case 0x180264u: goto label_180264;
        case 0x180268u: goto label_180268;
        case 0x18026cu: goto label_18026c;
        case 0x180270u: goto label_180270;
        case 0x180274u: goto label_180274;
        case 0x180278u: goto label_180278;
        case 0x18027cu: goto label_18027c;
        case 0x180280u: goto label_180280;
        case 0x180284u: goto label_180284;
        case 0x180288u: goto label_180288;
        case 0x18028cu: goto label_18028c;
        case 0x180290u: goto label_180290;
        case 0x180294u: goto label_180294;
        case 0x180298u: goto label_180298;
        case 0x18029cu: goto label_18029c;
        case 0x1802a0u: goto label_1802a0;
        case 0x1802a4u: goto label_1802a4;
        case 0x1802a8u: goto label_1802a8;
        case 0x1802acu: goto label_1802ac;
        case 0x1802b0u: goto label_1802b0;
        case 0x1802b4u: goto label_1802b4;
        case 0x1802b8u: goto label_1802b8;
        case 0x1802bcu: goto label_1802bc;
        case 0x1802c0u: goto label_1802c0;
        case 0x1802c4u: goto label_1802c4;
        case 0x1802c8u: goto label_1802c8;
        case 0x1802ccu: goto label_1802cc;
        case 0x1802d0u: goto label_1802d0;
        case 0x1802d4u: goto label_1802d4;
        case 0x1802d8u: goto label_1802d8;
        case 0x1802dcu: goto label_1802dc;
        case 0x1802e0u: goto label_1802e0;
        case 0x1802e4u: goto label_1802e4;
        case 0x1802e8u: goto label_1802e8;
        case 0x1802ecu: goto label_1802ec;
        case 0x1802f0u: goto label_1802f0;
        case 0x1802f4u: goto label_1802f4;
        case 0x1802f8u: goto label_1802f8;
        case 0x1802fcu: goto label_1802fc;
        case 0x180300u: goto label_180300;
        case 0x180304u: goto label_180304;
        case 0x180308u: goto label_180308;
        case 0x18030cu: goto label_18030c;
        case 0x180310u: goto label_180310;
        case 0x180314u: goto label_180314;
        case 0x180318u: goto label_180318;
        case 0x18031cu: goto label_18031c;
        case 0x180320u: goto label_180320;
        default: break;
    }

    ctx->pc = 0x180190u;

label_180190:
    // 0x180190: 0x27bdf7c0  addiu       $sp, $sp, -0x840
    ctx->pc = 0x180190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965184));
label_180194:
    // 0x180194: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x180194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_180198:
    // 0x180198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18019c:
    // 0x18019c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18019cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1801a0:
    // 0x1801a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1801a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1801a4:
    // 0x1801a4: 0xc060898  jal         func_182260
label_1801a8:
    if (ctx->pc == 0x1801A8u) {
        ctx->pc = 0x1801A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801A4u;
        // 0x1801a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801ACu;
        goto label_1801ac;
    }
    ctx->pc = 0x1801A4u;
    SET_GPR_U32(ctx, 31, 0x1801ACu);
    ctx->pc = 0x1801A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801A4u;
    // 0x1801a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182260u, 0x1801A4u, 0x1801ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1801ACu;
label_1801ac:
    // 0x1801ac: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1801acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1801b0:
    // 0x1801b0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1801b4:
    if (ctx->pc == 0x1801B4u) {
        ctx->pc = 0x1801B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801B0u;
        // 0x1801b4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801B8u;
        goto label_1801b8;
    }
    ctx->pc = 0x1801B0u;
    {
        const bool branch_taken_0x1801b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801B0u;
        // 0x1801b4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801b0) {
            ctx->pc = 0x1801F4u;
            goto label_1801f4;
        }
    }
    ctx->pc = 0x1801B8u;
label_1801b8:
    // 0x1801b8: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_1801bc:
    if (ctx->pc == 0x1801BCu) {
        ctx->pc = 0x1801BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801B8u;
        // 0x1801bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801C0u;
        goto label_1801c0;
    }
    ctx->pc = 0x1801B8u;
    {
        const bool branch_taken_0x1801b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1801BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801B8u;
        // 0x1801bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801b8) {
            ctx->pc = 0x1801F4u;
            goto label_1801f4;
        }
    }
    ctx->pc = 0x1801C0u;
label_1801c0:
    // 0x1801c0: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
label_1801c4:
    if (ctx->pc == 0x1801C4u) {
        ctx->pc = 0x1801C8u;
        goto label_1801c8;
    }
    ctx->pc = 0x1801C0u;
    {
        const bool branch_taken_0x1801c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1801c0) {
            ctx->pc = 0x1801F4u;
            goto label_1801f4;
        }
    }
    ctx->pc = 0x1801C8u;
label_1801c8:
    // 0x1801c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1801c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1801cc:
    // 0x1801cc: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_1801d0:
    if (ctx->pc == 0x1801D0u) {
        ctx->pc = 0x1801D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801CCu;
        // 0x1801d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801D4u;
        goto label_1801d4;
    }
    ctx->pc = 0x1801CCu;
    {
        const bool branch_taken_0x1801cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1801D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801CCu;
        // 0x1801d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801cc) {
            ctx->pc = 0x1801F4u;
            goto label_1801f4;
        }
    }
    ctx->pc = 0x1801D4u;
label_1801d4:
    // 0x1801d4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_1801d8:
    if (ctx->pc == 0x1801D8u) {
        ctx->pc = 0x1801DCu;
        goto label_1801dc;
    }
    ctx->pc = 0x1801D4u;
    {
        const bool branch_taken_0x1801d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1801d4) {
            ctx->pc = 0x1801E4u;
            goto label_1801e4;
        }
    }
    ctx->pc = 0x1801DCu;
label_1801dc:
    // 0x1801dc: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1801e0:
    if (ctx->pc == 0x1801E0u) {
        ctx->pc = 0x1801E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801DCu;
        // 0x1801e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801E4u;
        goto label_1801e4;
    }
    ctx->pc = 0x1801DCu;
    {
        const bool branch_taken_0x1801dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801DCu;
        // 0x1801e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801dc) {
            ctx->pc = 0x18030Cu;
            goto label_18030c;
        }
    }
    ctx->pc = 0x1801E4u;
label_1801e4:
    // 0x1801e4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1801e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1801e8:
    // 0x1801e8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1801e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_1801ec:
    // 0x1801ec: 0x10000046  b           . + 4 + (0x46 << 2)
label_1801f0:
    if (ctx->pc == 0x1801F0u) {
        ctx->pc = 0x1801F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801ECu;
        // 0x1801f0: 0xaf83865c  sw          $v1, -0x79A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801F4u;
        goto label_1801f4;
    }
    ctx->pc = 0x1801ECu;
    {
        const bool branch_taken_0x1801ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801ECu;
        // 0x1801f0: 0xaf83865c  sw          $v1, -0x79A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801ec) {
            ctx->pc = 0x180308u;
            goto label_180308;
        }
    }
    ctx->pc = 0x1801F4u;
label_1801f4:
    // 0x1801f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1801f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1801f8:
    // 0x1801f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1801f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1801fc:
    // 0x1801fc: 0xc0485b4  jal         func_1216D0
label_180200:
    if (ctx->pc == 0x180200u) {
        ctx->pc = 0x180200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801FCu;
        // 0x180200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180204u;
        goto label_180204;
    }
    ctx->pc = 0x1801FCu;
    SET_GPR_U32(ctx, 31, 0x180204u);
    ctx->pc = 0x180200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801FCu;
    // 0x180200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x1801FCu, 0x180204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180204u;
label_180204:
    // 0x180204: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x180204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_180208:
    // 0x180208: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x180208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_18020c:
    // 0x18020c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x18020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_180210:
    // 0x180210: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x180210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_180214:
    // 0x180214: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x180214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_180218:
    // 0x180218: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18021c:
    if (ctx->pc == 0x18021Cu) {
        ctx->pc = 0x18021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180218u;
        // 0x18021c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180220u;
        goto label_180220;
    }
    ctx->pc = 0x180218u;
    {
        const bool branch_taken_0x180218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180218u;
        // 0x18021c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180218) {
            ctx->pc = 0x180228u;
            goto label_180228;
        }
    }
    ctx->pc = 0x180220u;
label_180220:
    // 0x180220: 0x1000003a  b           . + 4 + (0x3A << 2)
label_180224:
    if (ctx->pc == 0x180224u) {
        ctx->pc = 0x180224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180220u;
        // 0x180224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180228u;
        goto label_180228;
    }
    ctx->pc = 0x180220u;
    {
        const bool branch_taken_0x180220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180220u;
        // 0x180224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180220) {
            ctx->pc = 0x18030Cu;
            goto label_18030c;
        }
    }
    ctx->pc = 0x180228u;
label_180228:
    // 0x180228: 0xc080748  jal         func_201D20
label_18022c:
    if (ctx->pc == 0x18022Cu) {
        ctx->pc = 0x180230u;
        goto label_180230;
    }
    ctx->pc = 0x180228u;
    SET_GPR_U32(ctx, 31, 0x180230u);
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x180228u, 0x180230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180230u;
label_180230:
    // 0x180230: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_180234:
    if (ctx->pc == 0x180234u) {
        ctx->pc = 0x180234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180230u;
        // 0x180234: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180238u;
        goto label_180238;
    }
    ctx->pc = 0x180230u;
    {
        const bool branch_taken_0x180230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180230u;
        // 0x180234: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180230) {
            ctx->pc = 0x180300u;
            goto label_180300;
        }
    }
    ctx->pc = 0x180238u;
label_180238:
    // 0x180238: 0x8c3287c8  lw          $s2, -0x7838($at)
    ctx->pc = 0x180238u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936520)));
label_18023c:
    // 0x18023c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18023cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180240:
    // 0x180240: 0x8c2287c4  lw          $v0, -0x783C($at)
    ctx->pc = 0x180240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936516)));
label_180244:
    // 0x180244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x180244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_180248:
    // 0x180248: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x180248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_18024c:
    // 0x18024c: 0x1251002c  beq         $s2, $s1, . + 4 + (0x2C << 2)
label_180250:
    if (ctx->pc == 0x180250u) {
        ctx->pc = 0x180254u;
        goto label_180254;
    }
    ctx->pc = 0x18024Cu;
    {
        const bool branch_taken_0x18024c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x18024c) {
            ctx->pc = 0x180300u;
            goto label_180300;
        }
    }
    ctx->pc = 0x180254u;
label_180254:
    // 0x180254: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x180254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_180258:
    // 0x180258: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x180258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18025c:
    // 0x18025c: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x18025cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_180260:
    // 0x180260: 0x320f809  jalr        $t9
label_180264:
    if (ctx->pc == 0x180264u) {
        ctx->pc = 0x180268u;
        goto label_180268;
    }
    ctx->pc = 0x180260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x180268u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180260u, 0x180268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180268u;
label_180268:
    // 0x180268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18026c:
    // 0x18026c: 0xc080702  jal         func_201C08
label_180270:
    if (ctx->pc == 0x180270u) {
        ctx->pc = 0x180270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18026Cu;
        // 0x180270: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180274u;
        goto label_180274;
    }
    ctx->pc = 0x18026Cu;
    SET_GPR_U32(ctx, 31, 0x180274u);
    ctx->pc = 0x180270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18026Cu;
    // 0x180270: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x18026Cu, 0x180274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180274u;
label_180274:
    // 0x180274: 0xc080d98  jal         func_203660
label_180278:
    if (ctx->pc == 0x180278u) {
        ctx->pc = 0x180278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180274u;
        // 0x180278: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18027Cu;
        goto label_18027c;
    }
    ctx->pc = 0x180274u;
    SET_GPR_U32(ctx, 31, 0x18027Cu);
    ctx->pc = 0x180278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180274u;
    // 0x180278: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x180274u, 0x18027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18027Cu;
label_18027c:
    // 0x18027c: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x18027cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_180280:
    // 0x180280: 0xc080702  jal         func_201C08
label_180284:
    if (ctx->pc == 0x180284u) {
        ctx->pc = 0x180284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180280u;
        // 0x180284: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180288u;
        goto label_180288;
    }
    ctx->pc = 0x180280u;
    SET_GPR_U32(ctx, 31, 0x180288u);
    ctx->pc = 0x180284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180280u;
    // 0x180284: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x180280u, 0x180288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180288u;
label_180288:
    // 0x180288: 0xc080d98  jal         func_203660
label_18028c:
    if (ctx->pc == 0x18028Cu) {
        ctx->pc = 0x18028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180288u;
        // 0x18028c: 0x27a40440  addiu       $a0, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180290u;
        goto label_180290;
    }
    ctx->pc = 0x180288u;
    SET_GPR_U32(ctx, 31, 0x180290u);
    ctx->pc = 0x18028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180288u;
    // 0x18028c: 0x27a40440  addiu       $a0, $sp, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x180288u, 0x180290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180290u;
label_180290:
    // 0x180290: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x180290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_180294:
    // 0x180294: 0xc080874  jal         func_2021D0
label_180298:
    if (ctx->pc == 0x180298u) {
        ctx->pc = 0x180298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180294u;
        // 0x180298: 0x27a50440  addiu       $a1, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18029Cu;
        goto label_18029c;
    }
    ctx->pc = 0x180294u;
    SET_GPR_U32(ctx, 31, 0x18029Cu);
    ctx->pc = 0x180298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180294u;
    // 0x180298: 0x27a50440  addiu       $a1, $sp, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x180294u, 0x18029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18029Cu;
label_18029c:
    // 0x18029c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1802a0:
    if (ctx->pc == 0x1802A0u) {
        ctx->pc = 0x1802A4u;
        goto label_1802a4;
    }
    ctx->pc = 0x18029Cu;
    {
        const bool branch_taken_0x18029c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18029c) {
            ctx->pc = 0x1802F4u;
            goto label_1802f4;
        }
    }
    ctx->pc = 0x1802A4u;
label_1802a4:
    // 0x1802a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1802a8:
    // 0x1802a8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1802a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1802ac:
    // 0x1802ac: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1802acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1802b0:
    // 0x1802b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1802b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1802b4:
    // 0x1802b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1802b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1802b8:
    // 0x1802b8: 0x320f809  jalr        $t9
label_1802bc:
    if (ctx->pc == 0x1802BCu) {
        ctx->pc = 0x1802BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802B8u;
        // 0x1802bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1802C0u;
        goto label_1802c0;
    }
    ctx->pc = 0x1802B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1802C0u);
        ctx->pc = 0x1802BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802B8u;
        // 0x1802bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1802B8u, 0x1802C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1802C0u;
label_1802c0:
    // 0x1802c0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1802c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1802c4:
    // 0x1802c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1802c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1802c8:
    // 0x1802c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1802c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1802cc:
    // 0x1802cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1802ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1802d0:
    // 0x1802d0: 0x320f809  jalr        $t9
label_1802d4:
    if (ctx->pc == 0x1802D4u) {
        ctx->pc = 0x1802D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802D0u;
        // 0x1802d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1802D8u;
        goto label_1802d8;
    }
    ctx->pc = 0x1802D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1802D8u);
        ctx->pc = 0x1802D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802D0u;
        // 0x1802d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1802D0u, 0x1802D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1802D8u;
label_1802d8:
    // 0x1802d8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1802d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1802dc:
    // 0x1802dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1802dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1802e0:
    // 0x1802e0: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1802e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1802e4:
    // 0x1802e4: 0x320f809  jalr        $t9
label_1802e8:
    if (ctx->pc == 0x1802E8u) {
        ctx->pc = 0x1802E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802E4u;
        // 0x1802e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1802ECu;
        goto label_1802ec;
    }
    ctx->pc = 0x1802E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1802ECu);
        ctx->pc = 0x1802E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802E4u;
        // 0x1802e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1802E4u, 0x1802ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1802ECu;
label_1802ec:
    // 0x1802ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1802f0:
    if (ctx->pc == 0x1802F0u) {
        ctx->pc = 0x1802F4u;
        goto label_1802f4;
    }
    ctx->pc = 0x1802ECu;
    {
        const bool branch_taken_0x1802ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1802ec) {
            ctx->pc = 0x180300u;
            goto label_180300;
        }
    }
    ctx->pc = 0x1802F4u;
label_1802f4:
    // 0x1802f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1802f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1802f8:
    // 0x1802f8: 0x1651ffd6  bne         $s2, $s1, . + 4 + (-0x2A << 2)
label_1802fc:
    if (ctx->pc == 0x1802FCu) {
        ctx->pc = 0x180300u;
        goto label_180300;
    }
    ctx->pc = 0x1802F8u;
    {
        const bool branch_taken_0x1802f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x1802f8) {
            ctx->pc = 0x180254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180254;
        }
    }
    ctx->pc = 0x180300u;
label_180300:
    // 0x180300: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_180304:
    // 0x180304: 0xaf82865c  sw          $v0, -0x79A4($gp)
    ctx->pc = 0x180304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 2));
label_180308:
    // 0x180308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18030c:
    // 0x18030c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18030cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_180310:
    // 0x180310: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_180314:
    // 0x180314: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_180318:
    // 0x180318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18031c:
    // 0x18031c: 0x3e00008  jr          $ra
label_180320:
    if (ctx->pc == 0x180320u) {
        ctx->pc = 0x180320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18031Cu;
        // 0x180320: 0x27bd0840  addiu       $sp, $sp, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180324u;
        goto label_fallthrough_0x18031c;
    }
    ctx->pc = 0x18031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18031Cu;
        // 0x180320: 0x27bd0840  addiu       $sp, $sp, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18031Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18031c:
    ctx->pc = 0x180324u;
}
