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

// Function: entry_00143f88
// Address: 0x143f88 - 0x143fdc
void entry_00143f88_0x143f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143f88_0x143f88");
#endif

    ctx->pc = 0x143f88u;

label_143f88:
    // 0x143f88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x143f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x143f8c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x143f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x143f90: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x143f90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x143f94: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x143f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x143f98: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x143f98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x143f9c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x143f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x143fa0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x143fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x143fa4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x143fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x143fa8: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x143fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x143fac: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x143facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x143fb0: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x143fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
    // 0x143fb4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x143fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x143fb8: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x143fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
    // 0x143fbc: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x143fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x143fc0: 0xa2830018  sb          $v1, 0x18($s4)
    ctx->pc = 0x143fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x143fc4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x143fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x143fc8: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x143fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
    // 0x143fcc: 0x1660ffee  bnez        $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x143FCCu;
    {
        const bool branch_taken_0x143fcc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x143FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FCCu;
        // 0x143fd0: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fcc) {
            ctx->pc = 0x143F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143f88;
        }
    }
    ctx->pc = 0x143FD4u;
    // 0x143fd4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x143FD4u;
    {
        const bool branch_taken_0x143fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FD4u;
        // 0x143fd8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fd4) {
            ctx->pc = 0x144284u;
            return;
        }
    }
    ctx->pc = 0x143FDCu;
}
