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

// Function: entry_00198eec
// Address: 0x198eec - 0x198f38
void entry_00198eec_0x198eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198eec_0x198eec");
#endif

    ctx->pc = 0x198eecu;

    // 0x198eec: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x198eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x198ef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198ef4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x198ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x198ef8: 0xae820670  sw          $v0, 0x670($s4)
    ctx->pc = 0x198ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 2));
    // 0x198efc: 0x8e840670  lw          $a0, 0x670($s4)
    ctx->pc = 0x198efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x198f00: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x198f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x198f04: 0xac4428e8  sw          $a0, 0x28E8($v0)
    ctx->pc = 0x198f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10472), GPR_U32(ctx, 4));
    // 0x198f08: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x198f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x198f0c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x198f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x198f10: 0xac4302dc  sw          $v1, 0x2DC($v0)
    ctx->pc = 0x198f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 732), GPR_U32(ctx, 3));
    // 0x198f14: 0xae800678  sw          $zero, 0x678($s4)
    ctx->pc = 0x198f14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 0));
    // 0x198f18: 0xae800688  sw          $zero, 0x688($s4)
    ctx->pc = 0x198f18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 0));
    // 0x198f1c: 0xae800684  sw          $zero, 0x684($s4)
    ctx->pc = 0x198f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1668), GPR_U32(ctx, 0));
    // 0x198f20: 0xae800680  sw          $zero, 0x680($s4)
    ctx->pc = 0x198f20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 0));
    // 0x198f24: 0xae80067c  sw          $zero, 0x67C($s4)
    ctx->pc = 0x198f24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1660), GPR_U32(ctx, 0));
    // 0x198f28: 0xae800934  sw          $zero, 0x934($s4)
    ctx->pc = 0x198f28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2356), GPR_U32(ctx, 0));
    // 0x198f2c: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x198f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x198f30: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x198f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x198f34: 0xae800930  sw          $zero, 0x930($s4)
    ctx->pc = 0x198f34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2352), GPR_U32(ctx, 0));
    ctx->pc = 0x198f38u;
}
