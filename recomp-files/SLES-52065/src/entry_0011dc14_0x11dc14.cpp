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

// Function: entry_0011dc14
// Address: 0x11dc14 - 0x11dc28
void entry_0011dc14_0x11dc14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dc14_0x11dc14");
#endif

    ctx->pc = 0x11dc14u;

    // 0x11dc14: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x11dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x11dc18: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x11dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x11dc1c: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x11dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x11dc20: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x11dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x11dc24: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x11dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    ctx->pc = 0x11dc28u;
}
