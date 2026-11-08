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

// Function: entry_001a6074
// Address: 0x1a6074 - 0x1a60ac
void entry_001a6074_0x1a6074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6074_0x1a6074");
#endif

    ctx->pc = 0x1a6074u;

    // 0x1a6074: 0x0  nop
    ctx->pc = 0x1a6074u;
    // NOP
    // 0x1a6078: 0xde8300d0  ld          $v1, 0xD0($s4)
    ctx->pc = 0x1a6078u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x1a607c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A607Cu;
    {
        const bool branch_taken_0x1a607c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a607c) {
            ctx->pc = 0x1A60E0u;
            return;
        }
    }
    ctx->pc = 0x1A6084u;
    // 0x1a6084: 0xde8200d8  ld          $v0, 0xD8($s4)
    ctx->pc = 0x1a6084u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1a6088: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x1a6088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x1a608c: 0xfe8200d0  sd          $v0, 0xD0($s4)
    ctx->pc = 0x1a608cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 208), GPR_U64(ctx, 2));
    // 0x1a6090: 0xde8300d0  ld          $v1, 0xD0($s4)
    ctx->pc = 0x1a6090u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x1a6094: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6094u;
    {
        const bool branch_taken_0x1a6094 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a6094) {
            ctx->pc = 0x1A60ACu;
            return;
        }
    }
    ctx->pc = 0x1A609Cu;
    // 0x1a609c: 0xde8200d8  ld          $v0, 0xD8($s4)
    ctx->pc = 0x1a609cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1a60a0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a60a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a60a4: 0xfe8200d8  sd          $v0, 0xD8($s4)
    ctx->pc = 0x1a60a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 216), GPR_U64(ctx, 2));
    // 0x1a60a8: 0xfe8000d0  sd          $zero, 0xD0($s4)
    ctx->pc = 0x1a60a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 208), GPR_U64(ctx, 0));
    ctx->pc = 0x1a60acu;
}
