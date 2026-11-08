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

// Function: entry_00170570
// Address: 0x170570 - 0x170590
void entry_00170570_0x170570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170570_0x170570");
#endif

    ctx->pc = 0x170570u;

    // 0x170570: 0x93888488  lbu         $t0, -0x7B78($gp)
    ctx->pc = 0x170570u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x170574: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170574u;
    {
        const bool branch_taken_0x170574 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x170578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170574u;
        // 0x170578: 0x8c860220  lw          $a2, 0x220($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170574) {
            ctx->pc = 0x170590u;
            return;
        }
    }
    ctx->pc = 0x17057Cu;
    // 0x17057c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x17057cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x170580: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x170580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x170584: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x170584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x170588: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x170588u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17058c: 0x0  nop
    ctx->pc = 0x17058cu;
    // NOP
    ctx->pc = 0x170590u;
}
