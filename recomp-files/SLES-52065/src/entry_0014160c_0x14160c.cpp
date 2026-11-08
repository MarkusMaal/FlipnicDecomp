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

// Function: entry_0014160c
// Address: 0x14160c - 0x141650
void entry_0014160c_0x14160c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014160c_0x14160c");
#endif

    ctx->pc = 0x14160cu;

    // 0x14160c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x14160cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x141610: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x141610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141614: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x141614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x141618: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x141618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14161c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14161cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x141620: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x141620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x141624: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x141624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x141628: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x141628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14162c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x14162cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x141630: 0x8fa70220  lw          $a3, 0x220($sp)
    ctx->pc = 0x141630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x141634: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x141634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141638: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x141638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x14163c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14163cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x141640: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x141640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x141644: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x141644u;
    {
        const bool branch_taken_0x141644 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x141644) {
            ctx->pc = 0x141650u;
            return;
        }
    }
    ctx->pc = 0x14164Cu;
    // 0x14164c: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x14164cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x141650u;
}
