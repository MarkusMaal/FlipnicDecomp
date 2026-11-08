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

// Function: caseD_1f
// Address: 0x1c2ad8 - 0x1c2b04
void caseD_1f_0x1c2ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1f_0x1c2ad8");
#endif

    ctx->pc = 0x1c2ad8u;

    // 0x1c2ad8: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2adc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2ae0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2AE0u;
    {
        const bool branch_taken_0x1c2ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AE0u;
        // 0x1c2ae4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ae0) {
            ctx->pc = 0x1C2B04u;
            return;
        }
    }
    ctx->pc = 0x1C2AE8u;
    // 0x1c2ae8: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1c2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1c2aec: 0x8c24f5d8  lw          $a0, -0xA28($at)
    ctx->pc = 0x1c2aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964696)));
    // 0x1c2af0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c2af4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c2af8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2afc: 0xac23f5d8  sw          $v1, -0xA28($at)
    ctx->pc = 0x1c2afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F5D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5D8u, _value); } while (0);
    // 0x1c2b00: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x1c2b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
    ctx->pc = 0x1c2b04u;
}
