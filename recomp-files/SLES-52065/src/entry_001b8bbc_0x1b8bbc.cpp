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

// Function: entry_001b8bbc
// Address: 0x1b8bbc - 0x1b8c40
void entry_001b8bbc_0x1b8bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8bbc_0x1b8bbc");
#endif

    ctx->pc = 0x1b8bbcu;

    // 0x1b8bbc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b8bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1b8bc0: 0x902bf430  lbu         $t3, -0xBD0($at)
    ctx->pc = 0x1b8bc0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
    // 0x1b8bc4: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x1b8bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b8bc8: 0x300a0003  andi        $t2, $zero, 0x3
    ctx->pc = 0x1b8bc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1b8bcc: 0x2407fff3  addiu       $a3, $zero, -0xD
    ctx->pc = 0x1b8bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1b8bd0: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1b8bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b8bd4: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1b8bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1b8bd8: 0x2405ffcf  addiu       $a1, $zero, -0x31
    ctx->pc = 0x1b8bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1b8bdc: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x1b8bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1b8be0: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x1b8be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1b8be4: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1b8be4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1b8be8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8bec: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1b8becu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1b8bf0: 0xa029f430  sb          $t1, -0xBD0($at)
    ctx->pc = 0x1b8bf0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x36F430u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F430u, _value); } while (0);
    // 0x1b8bf4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8bf8: 0x9029f430  lbu         $t1, -0xBD0($at)
    ctx->pc = 0x1b8bf8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x36F430u));
    // 0x1b8bfc: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1b8bfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1b8c00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8c04: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1b8c04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1b8c08: 0xa027f430  sb          $a3, -0xBD0($at)
    ctx->pc = 0x1b8c08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x36F430u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F430u, _value); } while (0);
    // 0x1b8c0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8c10: 0x9027f430  lbu         $a3, -0xBD0($at)
    ctx->pc = 0x1b8c10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x36F430u));
    // 0x1b8c14: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1b8c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1b8c18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8c1c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1b8c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1b8c20: 0xa025f430  sb          $a1, -0xBD0($at)
    ctx->pc = 0x1b8c20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x36F430u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F430u, _value); } while (0);
    // 0x1b8c24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8c28: 0x9025f430  lbu         $a1, -0xBD0($at)
    ctx->pc = 0x1b8c28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x36F430u));
    // 0x1b8c2c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b8c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b8c30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8c34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b8c38: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1B8C38u;
    {
        const bool branch_taken_0x1b8c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C38u;
        // 0x1b8c3c: 0xa023f430  sb          $v1, -0xBD0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c38) {
            ctx->pc = 0x1B8DCCu;
            return;
        }
    }
    ctx->pc = 0x1B8C40u;
}
