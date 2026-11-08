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

// Function: entry_0018fec8
// Address: 0x18fec8 - 0x18ff28
void entry_0018fec8_0x18fec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fec8_0x18fec8");
#endif

    switch (ctx->pc) {
        case 0x18ff20u: goto label_18ff20;
        default: break;
    }

    ctx->pc = 0x18fec8u;

label_18fec8:
    // 0x18fec8: 0x8ca80030  lw          $t0, 0x30($a1)
    ctx->pc = 0x18fec8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_18fecc:
    // 0x18fecc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18feccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_18fed0:
    // 0x18fed0: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x18fed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_18fed4:
    // 0x18fed4: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x18fed4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_18fed8:
    // 0x18fed8: 0x83140  sll         $a2, $t0, 5
    ctx->pc = 0x18fed8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_18fedc:
    // 0x18fedc: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x18fedcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_18fee0:
    // 0x18fee0: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x18fee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_18fee4:
    // 0x18fee4: 0x8d270034  lw          $a3, 0x34($t1)
    ctx->pc = 0x18fee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_18fee8:
    // 0x18fee8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18fee8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_18feec:
    // 0x18feec: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x18feecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_18fef0:
    // 0x18fef0: 0x8cc60054  lw          $a2, 0x54($a2)
    ctx->pc = 0x18fef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_18fef4:
    // 0x18fef4: 0x10c40023  beq         $a2, $a0, . + 4 + (0x23 << 2)
label_18fef8:
    if (ctx->pc == 0x18FEF8u) {
        ctx->pc = 0x18FEFCu;
        goto label_18fefc;
    }
    ctx->pc = 0x18FEF4u;
    {
        const bool branch_taken_0x18fef4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x18fef4) {
            ctx->pc = 0x18FF84u;
            return;
        }
    }
    ctx->pc = 0x18FEFCu;
label_18fefc:
    // 0x18fefc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x18fefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_18ff00:
    // 0x18ff00: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
label_18ff04:
    if (ctx->pc == 0x18FF04u) {
        ctx->pc = 0x18FF08u;
        goto label_18ff08;
    }
    ctx->pc = 0x18FF00u;
    {
        const bool branch_taken_0x18ff00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ff00) {
            ctx->pc = 0x18FF28u;
            return;
        }
    }
    ctx->pc = 0x18FF08u;
label_18ff08:
    // 0x18ff08: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
label_18ff0c:
    if (ctx->pc == 0x18FF0Cu) {
        ctx->pc = 0x18FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF08u;
        // 0x18ff0c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF10u;
        goto label_18ff10;
    }
    ctx->pc = 0x18FF08u;
    {
        const bool branch_taken_0x18ff08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF08u;
        // 0x18ff0c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff08) {
            ctx->pc = 0x18FF84u;
            return;
        }
    }
    ctx->pc = 0x18FF10u;
label_18ff10:
    // 0x18ff10: 0x8c99031c  lw          $t9, 0x31C($a0)
    ctx->pc = 0x18ff10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 796)));
label_18ff14:
    // 0x18ff14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x18ff14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_18ff18:
    // 0x18ff18: 0x320f809  jalr        $t9
label_18ff1c:
    if (ctx->pc == 0x18FF1Cu) {
        ctx->pc = 0x18FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF18u;
        // 0x18ff1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF20u;
        goto label_18ff20;
    }
    ctx->pc = 0x18FF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FF20u);
        ctx->pc = 0x18FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF18u;
        // 0x18ff1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FF18u, 0x18FF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FF20u;
label_18ff20:
    // 0x18ff20: 0x10000018  b           . + 4 + (0x18 << 2)
label_18ff24:
    if (ctx->pc == 0x18FF24u) {
        ctx->pc = 0x18FF28u;
        goto label_fallthrough_0x18ff20;
    }
    ctx->pc = 0x18FF20u;
    {
        const bool branch_taken_0x18ff20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff20) {
            ctx->pc = 0x18FF84u;
            return;
        }
    }
label_fallthrough_0x18ff20:
    ctx->pc = 0x18FF28u;
}
