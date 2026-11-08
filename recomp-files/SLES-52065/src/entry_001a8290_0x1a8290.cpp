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

// Function: entry_001a8290
// Address: 0x1a8290 - 0x1a839c
void entry_001a8290_0x1a8290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8290_0x1a8290");
#endif

    switch (ctx->pc) {
        case 0x1a82d4u: goto label_1a82d4;
        case 0x1a82fcu: goto label_1a82fc;
        case 0x1a8358u: goto label_1a8358;
        case 0x1a8390u: goto label_1a8390;
        default: break;
    }

    ctx->pc = 0x1a8290u;

label_1a8290:
    // 0x1a8290: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a8290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a8294:
    // 0x1a8294: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a8294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a8298:
    // 0x1a8298: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a8298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a829c:
    // 0x1a829c: 0xac620670  sw          $v0, 0x670($v1)
    ctx->pc = 0x1a829cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
label_1a82a0:
    // 0x1a82a0: 0xac600678  sw          $zero, 0x678($v1)
    ctx->pc = 0x1a82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1656), GPR_U32(ctx, 0));
label_1a82a4:
    // 0x1a82a4: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a82a8:
    // 0x1a82a8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a82ac:
    // 0x1a82ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a82acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a82b0:
    // 0x1a82b0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a82b4:
    // 0x1a82b4: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a82b8:
    // 0x1a82b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a82b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a82bc:
    // 0x1a82bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a82c0:
    // 0x1a82c0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a82c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a82c4:
    // 0x1a82c4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a82c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a82c8:
    // 0x1a82c8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a82c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a82cc:
    // 0x1a82cc: 0x320f809  jalr        $t9
label_1a82d0:
    if (ctx->pc == 0x1A82D0u) {
        ctx->pc = 0x1A82D4u;
        goto label_1a82d4;
    }
    ctx->pc = 0x1A82CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A82D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A82CCu, 0x1A82D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A82D4u;
label_1a82d4:
    // 0x1a82d4: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a82d8:
    // 0x1a82d8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a82dc:
    // 0x1a82dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a82e0:
    // 0x1a82e0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a82e4:
    // 0x1a82e4: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a82e8:
    // 0x1a82e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a82e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a82ec:
    // 0x1a82ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a82ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a82f0:
    // 0x1a82f0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a82f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a82f4:
    // 0x1a82f4: 0xc042570  jal         func_1095C0
label_1a82f8:
    if (ctx->pc == 0x1A82F8u) {
        ctx->pc = 0x1A82F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82F4u;
        // 0x1a82f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A82FCu;
        goto label_1a82fc;
    }
    ctx->pc = 0x1A82F4u;
    SET_GPR_U32(ctx, 31, 0x1A82FCu);
    ctx->pc = 0x1A82F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A82F4u;
    // 0x1a82f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A82F4u, 0x1A82FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A82FCu;
label_1a82fc:
    // 0x1a82fc: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a82fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a8300:
    // 0x1a8300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8304:
    // 0x1a8304: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8308:
    // 0x1a8308: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a8308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a830c:
    // 0x1a830c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a8310:
    // 0x1a8310: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a8310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a8314:
    // 0x1a8314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8318:
    // 0x1a8318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a831c:
    // 0x1a831c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a8320:
    // 0x1a8320: 0xa04001d3  sb          $zero, 0x1D3($v0)
    ctx->pc = 0x1a8320u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 0));
label_1a8324:
    // 0x1a8324: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a8324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a8328:
    // 0x1a8328: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a832c:
    // 0x1a832c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a832cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a8330:
    // 0x1a8330: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a8330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a8334:
    // 0x1a8334: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a8334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a8338:
    // 0x1a8338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a833c:
    // 0x1a833c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8340:
    // 0x1a8340: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a8344:
    // 0x1a8344: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1a8344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a8348:
    // 0x1a8348: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a8348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a834c:
    // 0x1a834c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a834cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a8350:
    // 0x1a8350: 0x320f809  jalr        $t9
label_1a8354:
    if (ctx->pc == 0x1A8354u) {
        ctx->pc = 0x1A8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8350u;
        // 0x1a8354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8358u;
        goto label_1a8358;
    }
    ctx->pc = 0x1A8350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8358u);
        ctx->pc = 0x1A8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8350u;
        // 0x1a8354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8350u, 0x1A8358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8358u;
label_1a8358:
    // 0x1a8358: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a8358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a835c:
    // 0x1a835c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a835cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8360:
    // 0x1a8360: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8364:
    // 0x1a8364: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a8364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a8368:
    // 0x1a8368: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a8368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a836c:
    // 0x1a836c: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a8370:
    // 0x1a8370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8374:
    // 0x1a8374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8378:
    // 0x1a8378: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a8378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a837c:
    // 0x1a837c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1a837cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a8380:
    // 0x1a8380: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a8380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a8384:
    // 0x1a8384: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1a8384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1a8388:
    // 0x1a8388: 0x320f809  jalr        $t9
label_1a838c:
    if (ctx->pc == 0x1A838Cu) {
        ctx->pc = 0x1A838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8388u;
        // 0x1a838c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8390u;
        goto label_1a8390;
    }
    ctx->pc = 0x1A8388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8390u);
        ctx->pc = 0x1A838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8388u;
        // 0x1a838c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8388u, 0x1A8390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8390u;
label_1a8390:
    // 0x1a8390: 0x8e6206c4  lw          $v0, 0x6C4($s3)
    ctx->pc = 0x1a8390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a8394:
    // 0x1a8394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8398:
    // 0x1a8398: 0xae6206c4  sw          $v0, 0x6C4($s3)
    ctx->pc = 0x1a8398u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1732), GPR_U32(ctx, 2));
    ctx->pc = 0x1a839cu;
}
