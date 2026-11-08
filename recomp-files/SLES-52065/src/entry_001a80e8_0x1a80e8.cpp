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

// Function: entry_001a80e8
// Address: 0x1a80e8 - 0x1a816c
void entry_001a80e8_0x1a80e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a80e8_0x1a80e8");
#endif

    switch (ctx->pc) {
        case 0x1a8160u: goto label_1a8160;
        default: break;
    }

    ctx->pc = 0x1a80e8u;

label_1a80e8:
    // 0x1a80e8: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x1a80e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a80ec:
    // 0x1a80ec: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x1a80ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1a80f0:
    // 0x1a80f0: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_1a80f4:
    if (ctx->pc == 0x1A80F4u) {
        ctx->pc = 0x1A80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80F0u;
        // 0x1a80f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80F8u;
        goto label_1a80f8;
    }
    ctx->pc = 0x1A80F0u;
    {
        const bool branch_taken_0x1a80f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80F0u;
        // 0x1a80f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80f0) {
            ctx->pc = 0x1A816Cu;
            return;
        }
    }
    ctx->pc = 0x1A80F8u;
label_1a80f8:
    // 0x1a80f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a80f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a80fc:
    // 0x1a80fc: 0xa020dfb0  sb          $zero, -0x2050($at)
    ctx->pc = 0x1a80fcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959024), (uint8_t)GPR_U32(ctx, 0));
label_1a8100:
    // 0x1a8100: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x1a8100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a8104:
    // 0x1a8104: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a8104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a8108:
    // 0x1a8108: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1a8108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1a810c:
    // 0x1a810c: 0xac23dfb4  sw          $v1, -0x204C($at)
    ctx->pc = 0x1a810cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959028), GPR_U32(ctx, 3));
label_1a8110:
    // 0x1a8110: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a8110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a8114:
    // 0x1a8114: 0xa020dfb8  sb          $zero, -0x2048($at)
    ctx->pc = 0x1a8114u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959032), (uint8_t)GPR_U32(ctx, 0));
label_1a8118:
    // 0x1a8118: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x1a8118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a811c:
    // 0x1a811c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a811cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a8120:
    // 0x1a8120: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1a8120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a8124:
    // 0x1a8124: 0xac23dfbc  sw          $v1, -0x2044($at)
    ctx->pc = 0x1a8124u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959036), GPR_U32(ctx, 3));
label_1a8128:
    // 0x1a8128: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a8128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a812c:
    // 0x1a812c: 0xa020dfc0  sb          $zero, -0x2040($at)
    ctx->pc = 0x1a812cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959040), (uint8_t)GPR_U32(ctx, 0));
label_1a8130:
    // 0x1a8130: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x1a8130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a8134:
    // 0x1a8134: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a8134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a8138:
    // 0x1a8138: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x1a8138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1a813c:
    // 0x1a813c: 0xac23dfc4  sw          $v1, -0x203C($at)
    ctx->pc = 0x1a813cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959044), GPR_U32(ctx, 3));
label_1a8140:
    // 0x1a8140: 0xaf80870c  sw          $zero, -0x78F4($gp)
    ctx->pc = 0x1a8140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 0));
label_1a8144:
    // 0x1a8144: 0x12600106  beqz        $s3, . + 4 + (0x106 << 2)
label_1a8148:
    if (ctx->pc == 0x1A8148u) {
        ctx->pc = 0x1A8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8144u;
        // 0x1a8148: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A814Cu;
        goto label_1a814c;
    }
    ctx->pc = 0x1A8144u;
    {
        const bool branch_taken_0x1a8144 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8144u;
        // 0x1a8148: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8144) {
            ctx->pc = 0x1A8560u;
            return;
        }
    }
    ctx->pc = 0x1A814Cu;
label_1a814c:
    // 0x1a814c: 0x8e79031c  lw          $t9, 0x31C($s3)
    ctx->pc = 0x1a814cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_1a8150:
    // 0x1a8150: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8154:
    // 0x1a8154: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a8154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a8158:
    // 0x1a8158: 0x320f809  jalr        $t9
label_1a815c:
    if (ctx->pc == 0x1A815Cu) {
        ctx->pc = 0x1A815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8158u;
        // 0x1a815c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8160u;
        goto label_1a8160;
    }
    ctx->pc = 0x1A8158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8160u);
        ctx->pc = 0x1A815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8158u;
        // 0x1a815c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8158u, 0x1A8160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8160u;
label_1a8160:
    // 0x1a8160: 0x100000ff  b           . + 4 + (0xFF << 2)
label_1a8164:
    if (ctx->pc == 0x1A8164u) {
        ctx->pc = 0x1A8168u;
        goto label_1a8168;
    }
    ctx->pc = 0x1A8160u;
    {
        const bool branch_taken_0x1a8160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8160) {
            ctx->pc = 0x1A8560u;
            return;
        }
    }
    ctx->pc = 0x1A8168u;
label_1a8168:
    // 0x1a8168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a816cu;
}
