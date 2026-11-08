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

// Function: entry_00200550
// Address: 0x200550 - 0x200588
void entry_00200550_0x200550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200550_0x200550");
#endif

    ctx->pc = 0x200550u;

label_200550:
    // 0x200550: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x200550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x200554: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x200554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x200558: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x200558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20055c: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x20055cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x200560: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x200560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x200564: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x200564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x200568: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x200568u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x20056c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x20056cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x200570: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x200570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x200574: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x200574u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x200578: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x200578u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x20057c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20057Cu;
    {
        const bool branch_taken_0x20057c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20057Cu;
        // 0x200580: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20057c) {
            ctx->pc = 0x200550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200550;
        }
    }
    ctx->pc = 0x200584u;
    // 0x200584: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x200584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    ctx->pc = 0x200588u;
}
