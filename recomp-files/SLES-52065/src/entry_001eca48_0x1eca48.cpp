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

// Function: entry_001eca48
// Address: 0x1eca48 - 0x1eca64
void entry_001eca48_0x1eca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eca48_0x1eca48");
#endif

    ctx->pc = 0x1eca48u;

    // 0x1eca48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1eca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eca4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eca50: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1eca50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1eca54: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1eca54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1eca58: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1eca58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1eca5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1ECA5Cu;
    {
        const bool branch_taken_0x1eca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA5Cu;
        // 0x1eca60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca5c) {
            ctx->pc = 0x1ECA88u;
            return;
        }
    }
    ctx->pc = 0x1ECA64u;
}
