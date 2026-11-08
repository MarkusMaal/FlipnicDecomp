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

// Function: entry_00167204
// Address: 0x167204 - 0x16725c
void entry_00167204_0x167204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167204_0x167204");
#endif

    ctx->pc = 0x167204u;

    // 0x167204: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x167204u;
    {
        const bool branch_taken_0x167204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x167204) {
            ctx->pc = 0x167360u;
            return;
        }
    }
    ctx->pc = 0x16720Cu;
    // 0x16720c: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x16720cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x167210: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x167210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x167214: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x167214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167218: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x167218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16721c: 0xae050220  sw          $a1, 0x220($s0)
    ctx->pc = 0x16721cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 5));
    // 0x167220: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x167220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x167224: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x167224u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x167228: 0x0  nop
    ctx->pc = 0x167228u;
    // NOP
    // 0x16722c: 0x0  nop
    ctx->pc = 0x16722cu;
    // NOP
    // 0x167230: 0x2010  mfhi        $a0
    ctx->pc = 0x167230u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x167234: 0xae040220  sw          $a0, 0x220($s0)
    ctx->pc = 0x167234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 4));
    // 0x167238: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x167238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x16723c: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x16723Cu;
    {
        const bool branch_taken_0x16723c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x167240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16723Cu;
        // 0x167240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16723c) {
            ctx->pc = 0x1672ACu;
            return;
        }
    }
    ctx->pc = 0x167244u;
    // 0x167244: 0x1085000e  beq         $a0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x167244u;
    {
        const bool branch_taken_0x167244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x167244) {
            ctx->pc = 0x167280u;
            return;
        }
    }
    ctx->pc = 0x16724Cu;
    // 0x16724c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16724Cu;
    {
        const bool branch_taken_0x16724c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16724c) {
            ctx->pc = 0x16725Cu;
            return;
        }
    }
    ctx->pc = 0x167254u;
    // 0x167254: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x167254u;
    {
        const bool branch_taken_0x167254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167254u;
        // 0x167258: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167254) {
            ctx->pc = 0x1672DCu;
            return;
        }
    }
    ctx->pc = 0x16725Cu;
}
