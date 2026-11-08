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

// Function: entry_00203678
// Address: 0x203678 - 0x20369c
void entry_00203678_0x203678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203678_0x203678");
#endif

    ctx->pc = 0x203678u;

    // 0x203678: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x203678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x20367c: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x20367cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    // 0x203680: 0x24e34dd1  addiu       $v1, $a3, 0x4DD1
    ctx->pc = 0x203680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 19921));
    // 0x203684: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x203684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x203688: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x203688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20368c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x203690: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x203690u;
    {
        const bool branch_taken_0x203690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203690u;
        // 0x203694: 0x24a2ffe0  addiu       $v0, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203690) {
            ctx->pc = 0x20369Cu;
            return;
        }
    }
    ctx->pc = 0x203698u;
    // 0x203698: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x203698u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20369cu;
}
