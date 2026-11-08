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

// Function: entry_002038ac
// Address: 0x2038ac - 0x2038e8
void entry_002038ac_0x2038ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002038ac_0x2038ac");
#endif

    ctx->pc = 0x2038acu;

    // 0x2038ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2038acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2038b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2038B0u;
    {
        const bool branch_taken_0x2038b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038B0u;
        // 0x2038b4: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038b0) {
            ctx->pc = 0x2038E8u;
            return;
        }
    }
    ctx->pc = 0x2038B8u;
    // 0x2038b8: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2038b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2038bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2038BCu;
    {
        const bool branch_taken_0x2038bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038BCu;
        // 0x2038c0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038bc) {
            ctx->pc = 0x2038ECu;
            return;
        }
    }
    ctx->pc = 0x2038C4u;
    // 0x2038c4: 0x90e2ffff  lbu         $v0, -0x1($a3)
    ctx->pc = 0x2038c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x2038c8: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2038C8u;
    {
        const bool branch_taken_0x2038c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2038c8) {
            ctx->pc = 0x2038ECu;
            return;
        }
    }
    ctx->pc = 0x2038D0u;
    // 0x2038d0: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2038d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2038d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2038d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2038d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2038d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2038dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2038dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2038E0u;
    {
        const bool branch_taken_0x2038e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038E0u;
        // 0x2038e4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038e0) {
            ctx->pc = 0x20391Cu;
            return;
        }
    }
    ctx->pc = 0x2038E8u;
}
