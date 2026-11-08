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

// Function: entry_0011d230
// Address: 0x11d230 - 0x11d284
void entry_0011d230_0x11d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d230_0x11d230");
#endif

    ctx->pc = 0x11d230u;

    // 0x11d230: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x11d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x11d234: 0x3c01000c  lui         $at, 0xC
    ctx->pc = 0x11d234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12 << 16));
    // 0x11d238: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x11d238u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11d23c: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x11d23cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11d240: 0x10200069  beqz        $at, . + 4 + (0x69 << 2)
    ctx->pc = 0x11D240u;
    {
        const bool branch_taken_0x11d240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d240) {
            ctx->pc = 0x11D3E8u;
            return;
        }
    }
    ctx->pc = 0x11D248u;
    // 0x11d248: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x11d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11d24c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x11d24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x11d250: 0x8e07007c  lw          $a3, 0x7C($s0)
    ctx->pc = 0x11d250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x11d254: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x11d254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11d258: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x11d258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x11d25c: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x11d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x11d260: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x11d260u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d264: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x11d264u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x11d268: 0x634c0  sll         $a2, $a2, 19
    ctx->pc = 0x11d268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
    // 0x11d26c: 0x281082a  slt         $at, $s4, $at
    ctx->pc = 0x11d26cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11d270: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x11d270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11d274: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D274u;
    {
        const bool branch_taken_0x11d274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D274u;
        // 0x11d278: 0xa6b021  addu        $s6, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d274) {
            ctx->pc = 0x11D284u;
            return;
        }
    }
    ctx->pc = 0x11D27Cu;
    // 0x11d27c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11D27Cu;
    {
        const bool branch_taken_0x11d27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D27Cu;
        // 0x11d280: 0x8ea50538  lw          $a1, 0x538($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d27c) {
            ctx->pc = 0x11D28Cu;
            return;
        }
    }
    ctx->pc = 0x11D284u;
}
