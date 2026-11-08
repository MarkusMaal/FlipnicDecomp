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

// Function: entry_00198978
// Address: 0x198978 - 0x1989b0
void entry_00198978_0x198978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198978_0x198978");
#endif

    ctx->pc = 0x198978u;

    // 0x198978: 0x8e230678  lw          $v1, 0x678($s1)
    ctx->pc = 0x198978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x19897c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19897Cu;
    {
        const bool branch_taken_0x19897c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19897Cu;
        // 0x198980: 0x26250678  addiu       $a1, $s1, 0x678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19897c) {
            ctx->pc = 0x1989B0u;
            return;
        }
    }
    ctx->pc = 0x198984u;
    // 0x198984: 0x8e240450  lw          $a0, 0x450($s1)
    ctx->pc = 0x198984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x198988: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x198988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19898c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19898cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198990: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x198990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x198994: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x198994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x198998: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x198998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x19899c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19899Cu;
    {
        const bool branch_taken_0x19899c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19899c) {
            ctx->pc = 0x1989D4u;
            return;
        }
    }
    ctx->pc = 0x1989A4u;
    // 0x1989a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1989a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1989a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1989A8u;
    {
        const bool branch_taken_0x1989a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1989ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989A8u;
        // 0x1989ac: 0xacb30000  sw          $s3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989a8) {
            ctx->pc = 0x1989D4u;
            return;
        }
    }
    ctx->pc = 0x1989B0u;
}
