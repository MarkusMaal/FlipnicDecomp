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

// Function: entry_001150e4
// Address: 0x1150e4 - 0x115128
void entry_001150e4_0x1150e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001150e4_0x1150e4");
#endif

    switch (ctx->pc) {
        case 0x115108u: goto label_115108;
        default: break;
    }

    ctx->pc = 0x1150e4u;

label_1150e4:
    // 0x1150e4: 0x938282b0  lbu         $v0, -0x7D50($gp)
    ctx->pc = 0x1150e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935216)));
label_1150e8:
    // 0x1150e8: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x1150e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_1150ec:
    // 0x1150ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1150ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1150f0:
    // 0x1150f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1150f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1150f4:
    // 0x1150f4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1150f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1150f8:
    // 0x1150f8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1150f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1150fc:
    // 0x1150fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1150fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115100:
    // 0x115100: 0x320f809  jalr        $t9
label_115104:
    if (ctx->pc == 0x115104u) {
        ctx->pc = 0x115104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115100u;
        // 0x115104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115108u;
        goto label_115108;
    }
    ctx->pc = 0x115100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115108u);
        ctx->pc = 0x115104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115100u;
        // 0x115104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115100u, 0x115108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115108u;
label_115108:
    // 0x115108: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x115108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_11510c:
    // 0x11510c: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x11510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_115110:
    // 0x115110: 0x90420085  lbu         $v0, 0x85($v0)
    ctx->pc = 0x115110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 133)));
label_115114:
    // 0x115114: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_115118:
    if (ctx->pc == 0x115118u) {
        ctx->pc = 0x11511Cu;
        goto label_11511c;
    }
    ctx->pc = 0x115114u;
    {
        const bool branch_taken_0x115114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115114) {
            ctx->pc = 0x115128u;
            return;
        }
    }
    ctx->pc = 0x11511Cu;
label_11511c:
    // 0x11511c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x11511cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_115120:
    // 0x115120: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_115124:
    // 0x115124: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x115124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x115128u;
}
