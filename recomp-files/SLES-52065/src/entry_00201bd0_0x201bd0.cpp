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

// Function: entry_00201bd0
// Address: 0x201bd0 - 0x201bf0
void entry_00201bd0_0x201bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201bd0_0x201bd0");
#endif

    ctx->pc = 0x201bd0u;

    // 0x201bd0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x201bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x201bd4: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x201bd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201bd8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x201bd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x201bdc: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201BDCu;
    {
        const bool branch_taken_0x201bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x201bdc) {
            ctx->pc = 0x201BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201BDCu;
            // 0x201be0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201BF8u;
            return;
        }
    }
    ctx->pc = 0x201BE4u;
    // 0x201be4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x201be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x201be8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x201be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x201bec: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x201becu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x201bf0u;
}
