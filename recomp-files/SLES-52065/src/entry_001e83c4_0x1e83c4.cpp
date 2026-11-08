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

// Function: entry_001e83c4
// Address: 0x1e83c4 - 0x1e83f4
void entry_001e83c4_0x1e83c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e83c4_0x1e83c4");
#endif

    ctx->pc = 0x1e83c4u;

label_1e83c4:
    // 0x1e83c4: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x1e83c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1e83c8: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x1e83c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x1e83cc: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1e83ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e83d0: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x1e83d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e83d4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1e83d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e83d8: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x1e83d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1e83dc: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x1e83dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e83e0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x1e83e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e83e4: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x1e83e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e83e8: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x1e83e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1e83ec: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E83ECu;
    {
        const bool branch_taken_0x1e83ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83ECu;
        // 0x1e83f0: 0xa4a30006  sh          $v1, 0x6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e83ec) {
            ctx->pc = 0x1E83C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e83c4;
        }
    }
    ctx->pc = 0x1E83F4u;
}
