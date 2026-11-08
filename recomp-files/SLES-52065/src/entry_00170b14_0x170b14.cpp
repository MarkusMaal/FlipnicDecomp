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

// Function: entry_00170b14
// Address: 0x170b14 - 0x170b40
void entry_00170b14_0x170b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170b14_0x170b14");
#endif

    ctx->pc = 0x170b14u;

    // 0x170b14: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x170b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x170b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170b1c: 0x0  nop
    ctx->pc = 0x170b1cu;
    // NOP
    // 0x170b20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170b24: 0x0  nop
    ctx->pc = 0x170b24u;
    // NOP
    // 0x170b28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x170B28u;
    {
        const bool branch_taken_0x170b28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x170b28) {
            ctx->pc = 0x170B40u;
            return;
        }
    }
    ctx->pc = 0x170B30u;
    // 0x170b30: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x170b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x170b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170b38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x170B38u;
    {
        const bool branch_taken_0x170b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B38u;
        // 0x170b3c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b38) {
            ctx->pc = 0x170B64u;
            return;
        }
    }
    ctx->pc = 0x170B40u;
}
