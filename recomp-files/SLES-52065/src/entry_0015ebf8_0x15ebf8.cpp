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

// Function: entry_0015ebf8
// Address: 0x15ebf8 - 0x15ec44
void entry_0015ebf8_0x15ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ebf8_0x15ebf8");
#endif

    ctx->pc = 0x15ebf8u;

    // 0x15ebf8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x15ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15ebfc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15ec00: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x15ec00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x15ec04: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15ec08: 0x752821  addu        $a1, $v1, $s5
    ctx->pc = 0x15ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x15ec0c: 0x84a40228  lh          $a0, 0x228($a1)
    ctx->pc = 0x15ec0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 552)));
    // 0x15ec10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ec14: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x15EC14u;
    {
        const bool branch_taken_0x15ec14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ec14) {
            ctx->pc = 0x15EC84u;
            return;
        }
    }
    ctx->pc = 0x15EC1Cu;
    // 0x15ec1c: 0x84a4022a  lh          $a0, 0x22A($a1)
    ctx->pc = 0x15ec1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 554)));
    // 0x15ec20: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15ec24: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15EC24u;
    {
        const bool branch_taken_0x15ec24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC24u;
        // 0x15ec28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec24) {
            ctx->pc = 0x15EC5Cu;
            return;
        }
    }
    ctx->pc = 0x15EC2Cu;
    // 0x15ec2c: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15EC2Cu;
    {
        const bool branch_taken_0x15ec2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x15ec2c) {
            ctx->pc = 0x15EC44u;
            return;
        }
    }
    ctx->pc = 0x15EC34u;
    // 0x15ec34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x15ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15ec38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15ec38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec3c: 0xc05b698  jal         func_16DA60
    ctx->pc = 0x15EC3Cu;
    SET_GPR_U32(ctx, 31, 0x15EC44u);
    ctx->pc = 0x15EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC3Cu;
    // 0x15ec40: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA60u, 0x15EC3Cu, 0x15EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC44u;
}
