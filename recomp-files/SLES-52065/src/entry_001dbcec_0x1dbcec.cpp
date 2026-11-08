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

// Function: entry_001dbcec
// Address: 0x1dbcec - 0x1dbd10
void entry_001dbcec_0x1dbcec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbcec_0x1dbcec");
#endif

    ctx->pc = 0x1dbcecu;

    // 0x1dbcec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dbcf0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1dbcf0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbcf4: 0x19000015  blez        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DBCF4u;
    {
        const bool branch_taken_0x1dbcf4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1DBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCF4u;
        // 0x1dbcf8: 0x8c477320  lw          $a3, 0x7320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbcf4) {
            ctx->pc = 0x1DBD4Cu;
            return;
        }
    }
    ctx->pc = 0x1DBCFCu;
    // 0x1dbcfc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dbd00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1dbd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd04: 0x24497338  addiu       $t1, $v0, 0x7338
    ctx->pc = 0x1dbd04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 29496));
    // 0x1dbd08: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd0c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1dbd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x1dbd10u;
}
