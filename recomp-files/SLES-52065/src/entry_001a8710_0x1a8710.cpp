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

// Function: entry_001a8710
// Address: 0x1a8710 - 0x1a8764
void entry_001a8710_0x1a8710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8710_0x1a8710");
#endif

    ctx->pc = 0x1a8710u;

    // 0x1a8710: 0xae8209c4  sw          $v0, 0x9C4($s4)
    ctx->pc = 0x1a8710u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2500), GPR_U32(ctx, 2));
    // 0x1a8714: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a8714u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8718: 0xae8009b0  sw          $zero, 0x9B0($s4)
    ctx->pc = 0x1a8718u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2480), GPR_U32(ctx, 0));
    // 0x1a871c: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1a871cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
    // 0x1a8720: 0xae8006d0  sw          $zero, 0x6D0($s4)
    ctx->pc = 0x1a8720u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1744), GPR_U32(ctx, 0));
    // 0x1a8724: 0xae80073c  sw          $zero, 0x73C($s4)
    ctx->pc = 0x1a8724u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1852), GPR_U32(ctx, 0));
    // 0x1a8728: 0xae800738  sw          $zero, 0x738($s4)
    ctx->pc = 0x1a8728u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1848), GPR_U32(ctx, 0));
    // 0x1a872c: 0xae8007a4  sw          $zero, 0x7A4($s4)
    ctx->pc = 0x1a872cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1956), GPR_U32(ctx, 0));
    // 0x1a8730: 0xae8007a0  sw          $zero, 0x7A0($s4)
    ctx->pc = 0x1a8730u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1952), GPR_U32(ctx, 0));
    // 0x1a8734: 0xae80080c  sw          $zero, 0x80C($s4)
    ctx->pc = 0x1a8734u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2060), GPR_U32(ctx, 0));
    // 0x1a8738: 0xae800808  sw          $zero, 0x808($s4)
    ctx->pc = 0x1a8738u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2056), GPR_U32(ctx, 0));
    // 0x1a873c: 0xae800874  sw          $zero, 0x874($s4)
    ctx->pc = 0x1a873cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2164), GPR_U32(ctx, 0));
    // 0x1a8740: 0xae800870  sw          $zero, 0x870($s4)
    ctx->pc = 0x1a8740u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2160), GPR_U32(ctx, 0));
    // 0x1a8744: 0xae8008dc  sw          $zero, 0x8DC($s4)
    ctx->pc = 0x1a8744u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2268), GPR_U32(ctx, 0));
    // 0x1a8748: 0xae8008d8  sw          $zero, 0x8D8($s4)
    ctx->pc = 0x1a8748u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2264), GPR_U32(ctx, 0));
    // 0x1a874c: 0xae800944  sw          $zero, 0x944($s4)
    ctx->pc = 0x1a874cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2372), GPR_U32(ctx, 0));
    // 0x1a8750: 0xae800940  sw          $zero, 0x940($s4)
    ctx->pc = 0x1a8750u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2368), GPR_U32(ctx, 0));
    // 0x1a8754: 0xae8009ac  sw          $zero, 0x9AC($s4)
    ctx->pc = 0x1a8754u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2476), GPR_U32(ctx, 0));
    // 0x1a8758: 0xae8009a8  sw          $zero, 0x9A8($s4)
    ctx->pc = 0x1a8758u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2472), GPR_U32(ctx, 0));
    // 0x1a875c: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x1a875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x1a8760: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1a8760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1a8764u;
}
