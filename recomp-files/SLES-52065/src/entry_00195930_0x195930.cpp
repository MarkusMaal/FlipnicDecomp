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

// Function: entry_00195930
// Address: 0x195930 - 0x19596c
void entry_00195930_0x195930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195930_0x195930");
#endif

    ctx->pc = 0x195930u;

    // 0x195930: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x195930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x195934: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x195938: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x195938u;
    {
        const bool branch_taken_0x195938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195938u;
        // 0x19593c: 0x8e860328  lw          $a2, 0x328($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195938) {
            ctx->pc = 0x195A0Cu;
            return;
        }
    }
    ctx->pc = 0x195940u;
    // 0x195940: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195944: 0x10c2001c  beq         $a2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x195944u;
    {
        const bool branch_taken_0x195944 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x195944) {
            ctx->pc = 0x1959B8u;
            return;
        }
    }
    ctx->pc = 0x19594Cu;
    // 0x19594c: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x19594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x195950: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x195950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x195954: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x195954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19595c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19595Cu;
    {
        const bool branch_taken_0x19595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19595Cu;
        // 0x195960: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19595c) {
            ctx->pc = 0x19596Cu;
            return;
        }
    }
    ctx->pc = 0x195964u;
    // 0x195964: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x195964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x195968: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x195968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
    ctx->pc = 0x19596cu;
}
