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

// Function: entry_001023a4
// Address: 0x1023a4 - 0x102498
void entry_001023a4_0x1023a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001023a4_0x1023a4");
#endif

    ctx->pc = 0x1023a4u;

label_1023a4:
    // 0x1023a4: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x1023a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1023a8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1023a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1023ac: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x1023acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1023b0: 0x28450002  slti        $a1, $v0, 0x2
    ctx->pc = 0x1023b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1023b4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1023b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1023b8: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1023b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1023bc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1023bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1023c0: 0xacc7023c  sw          $a3, 0x23C($a2)
    ctx->pc = 0x1023c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 572), GPR_U32(ctx, 7));
    // 0x1023c4: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x1023c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1023c8: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x1023c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1023cc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1023ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1023d0: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x1023d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1023d4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1023d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1023d8: 0xacc7060c  sw          $a3, 0x60C($a2)
    ctx->pc = 0x1023d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1548), GPR_U32(ctx, 7));
    // 0x1023dc: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x1023dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1023e0: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x1023e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1023e4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1023e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1023e8: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x1023e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1023ec: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1023ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1023f0: 0xacc709dc  sw          $a3, 0x9DC($a2)
    ctx->pc = 0x1023f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2524), GPR_U32(ctx, 7));
    // 0x1023f4: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x1023f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1023f8: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x1023f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1023fc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1023fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102400: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x102400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x102404: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x102404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x102408: 0xacc70dac  sw          $a3, 0xDAC($a2)
    ctx->pc = 0x102408u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3500), GPR_U32(ctx, 7));
    // 0x10240c: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x10240cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x102410: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102414: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x102414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102418: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x102418u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x10241c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x10241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x102420: 0xacc7117c  sw          $a3, 0x117C($a2)
    ctx->pc = 0x102420u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4476), GPR_U32(ctx, 7));
    // 0x102424: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x102424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x102428: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10242c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x10242cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102430: 0x8ce70014  lw          $a3, 0x14($a3)
    ctx->pc = 0x102430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x102434: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x102434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x102438: 0xacc7154c  sw          $a3, 0x154C($a2)
    ctx->pc = 0x102438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5452), GPR_U32(ctx, 7));
    // 0x10243c: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x10243cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x102440: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102444: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x102444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102448: 0x8ce70018  lw          $a3, 0x18($a3)
    ctx->pc = 0x102448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x10244c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x10244cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x102450: 0xacc7191c  sw          $a3, 0x191C($a2)
    ctx->pc = 0x102450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6428), GPR_U32(ctx, 7));
    // 0x102454: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x102454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x102458: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10245c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x10245cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102460: 0x8ce7001c  lw          $a3, 0x1C($a3)
    ctx->pc = 0x102460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x102464: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x102464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x102468: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x102468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x10246c: 0x24841e80  addiu       $a0, $a0, 0x1E80
    ctx->pc = 0x10246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7808));
    // 0x102470: 0x14a0ffcc  bnez        $a1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x102470u;
    {
        const bool branch_taken_0x102470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x102474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102470u;
        // 0x102474: 0xacc71cec  sw          $a3, 0x1CEC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 7404), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102470) {
            ctx->pc = 0x1023A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1023a4;
        }
    }
    ctx->pc = 0x102478u;
    // 0x102478: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x102478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x10247c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x10247Cu;
    {
        const bool branch_taken_0x10247c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10247Cu;
        // 0x102480: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10247c) {
            ctx->pc = 0x1024C4u;
            return;
        }
    }
    ctx->pc = 0x102484u;
    // 0x102484: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x102484u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x102488: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x102488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10248c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10248cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x102490: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x102490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102494: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x102494u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x102498u;
}
