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

// Function: entry_00100fe4
// Address: 0x100fe4 - 0x101020
void entry_00100fe4_0x100fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100fe4_0x100fe4");
#endif

    ctx->pc = 0x100fe4u;

label_100fe4:
    // 0x100fe4: 0x0  nop
    ctx->pc = 0x100fe4u;
    // NOP
    // 0x100fe8: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x100fe8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x100fec: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x100FECu;
    {
        const bool branch_taken_0x100fec = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x100fec) {
            ctx->pc = 0x101020u;
            return;
        }
    }
    ctx->pc = 0x100FF4u;
    // 0x100ff4: 0x8f858218  lw          $a1, -0x7DE8($gp)
    ctx->pc = 0x100ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100ff8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x100ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x100ffc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x100ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x101000: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x101000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101004: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x101004u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x101008: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x101008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x10100c: 0x131102a  slt         $v0, $t1, $s1
    ctx->pc = 0x10100cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x101010: 0x8ca52c1c  lw          $a1, 0x2C1C($a1)
    ctx->pc = 0x101010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x101014: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x101014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x101018: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x101018u;
    {
        const bool branch_taken_0x101018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101018u;
        // 0x10101c: 0xa0a00042  sb          $zero, 0x42($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 66), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101018) {
            ctx->pc = 0x100FE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100fe4;
        }
    }
    ctx->pc = 0x101020u;
}
