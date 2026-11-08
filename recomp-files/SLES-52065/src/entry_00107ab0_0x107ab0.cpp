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

// Function: entry_00107ab0
// Address: 0x107ab0 - 0x107ae0
void entry_00107ab0_0x107ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107ab0_0x107ab0");
#endif

    ctx->pc = 0x107ab0u;

    // 0x107ab0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x107ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x107ab4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x107ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x107ab8: 0x2463fd90  addiu       $v1, $v1, -0x270
    ctx->pc = 0x107ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966672));
    // 0x107abc: 0x488c0  sll         $s1, $a0, 3
    ctx->pc = 0x107abcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x107ac0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x107ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x107ac4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x107ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x107ac8: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x107ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x107acc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x107accu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107ad0: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x107AD0u;
    {
        const bool branch_taken_0x107ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x107ad0) {
            ctx->pc = 0x107B4Cu;
            return;
        }
    }
    ctx->pc = 0x107AD8u;
    // 0x107ad8: 0x600001c  bltz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x107AD8u;
    {
        const bool branch_taken_0x107ad8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x107ad8) {
            ctx->pc = 0x107B4Cu;
            return;
        }
    }
    ctx->pc = 0x107AE0u;
}
