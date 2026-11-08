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

// Function: entry_001ece04
// Address: 0x1ece04 - 0x1ece40
void entry_001ece04_0x1ece04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ece04_0x1ece04");
#endif

    ctx->pc = 0x1ece04u;

    // 0x1ece04: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ece04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ece08: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ECE08u;
    {
        const bool branch_taken_0x1ece08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE08u;
        // 0x1ece0c: 0x2642c680  addiu       $v0, $s2, -0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece08) {
            ctx->pc = 0x1ECE40u;
            return;
        }
    }
    ctx->pc = 0x1ECE10u;
    // 0x1ece10: 0x2644c680  addiu       $a0, $s2, -0x3980
    ctx->pc = 0x1ece10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952576));
    // 0x1ece14: 0xae20a3c0  sw          $zero, -0x5C40($s1)
    ctx->pc = 0x1ece14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943680), GPR_U32(ctx, 0));
    // 0x1ece18: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1ece18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ece1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ece1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ece20: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1ece20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ece24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ece24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ece28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ece2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ece2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ece30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ece30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ece34: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1ece34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ece38: 0x807b20e  j           func_1EC838
    ctx->pc = 0x1ECE38u;
    ctx->pc = 0x1ECE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE38u;
    // 0x1ece3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC838u;
    FUN_001ec838_0x1ec838(rdram, ctx, runtime); return;
    ctx->pc = 0x1ECE40u;
}
