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

// Function: entry_00162f84
// Address: 0x162f84 - 0x162fb0
void entry_00162f84_0x162f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162f84_0x162f84");
#endif

    ctx->pc = 0x162f84u;

    // 0x162f84: 0x0  nop
    ctx->pc = 0x162f84u;
    // NOP
    // 0x162f88: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x162f88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x162f8c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x162F8Cu;
    {
        const bool branch_taken_0x162f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F8Cu;
        // 0x162f90: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f8c) {
            ctx->pc = 0x162F64u;
            return;
        }
    }
    ctx->pc = 0x162F94u;
    // 0x162f94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x162f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162f9c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x162f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x162fa0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x162fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x162fa4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x162fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x162fa8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x162FA8u;
    {
        const bool branch_taken_0x162fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FA8u;
        // 0x162fac: 0x2604fffe  addiu       $a0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fa8) {
            ctx->pc = 0x16309Cu;
            return;
        }
    }
    ctx->pc = 0x162FB0u;
}
