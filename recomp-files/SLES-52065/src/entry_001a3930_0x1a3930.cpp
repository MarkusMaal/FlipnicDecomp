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

// Function: entry_001a3930
// Address: 0x1a3930 - 0x1a3950
void entry_001a3930_0x1a3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3930_0x1a3930");
#endif

    ctx->pc = 0x1a3930u;

    // 0x1a3930: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1a3930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a3934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a3934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3938: 0xac6428e0  sw          $a0, 0x28E0($v1)
    ctx->pc = 0x1a3938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10464), GPR_U32(ctx, 4));
    // 0x1a393c: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x1a393cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    // 0x1a3940: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x1a3940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
    // 0x1a3944: 0xae200678  sw          $zero, 0x678($s1)
    ctx->pc = 0x1a3944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 0));
    // 0x1a3948: 0xae200680  sw          $zero, 0x680($s1)
    ctx->pc = 0x1a3948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
    // 0x1a394c: 0xae200790  sw          $zero, 0x790($s1)
    ctx->pc = 0x1a394cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 0));
    ctx->pc = 0x1a3950u;
}
